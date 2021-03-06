#ifndef _logger_h_
#define _logger_h_ 1

#include <iostream>
#include <fstream>
#include <set>
#include <cstdio>
#include <boost/date_time/posix_time/posix_time.hpp>
#include "sys/stat.h"
#include "core/architecture/archConfig.h"
#include "tools/XMLConfig.h"

#include "core/elements/Singleton.hpp"


//TODO mutex needed
//it's not thread safe but it is instantiated long before any thread creation


class LoggerClass
{

public:

	enum MsgType { FatalError = 0, Error, Warning, Info, ExtraInfo, ExtraExtraInfo, Debug };

	~LoggerClass ()
	{
		ErrorLog.close();
	}

	template<class T>
	void WriteMsg ( std::string name, const T & msg, MsgType type )
	{
		if ( lastConfRead + boost::posix_time::seconds(reparsingPeriod)
		        < boost::posix_time::microsec_clock::universal_time() )
			ReadConfiguration();

		if ( type > VerbosityLevel )
			return;

		switch (type)
		{
		case FatalError:
		case Error:
			WriteMsgToBuffers ( name, msg, "red" );
			break;

		case Warning:
			WriteMsgToBuffers ( name, msg, "yellow" );
			break;

		case Info:
		case ExtraInfo:
			if ( ! ActivityFilterEnabled )
				WriteMsgToBuffers ( name, msg, "default" );
			else if ( ActivityFilter.find(name) != ActivityFilter.end() )
				WriteMsgToBuffers ( name, msg, "default" );

			break;

		case ExtraExtraInfo:
			if ( ! ActivityFilterEnabled )
				WriteMsgToBuffers ( name, msg, "blue" );
			else if ( ActivityFilter.find(name) != ActivityFilter.end() )
				WriteMsgToBuffers ( name, msg, "blue" );

		case Debug:
			if ( DebuggingMode )
			{
				if ( DebugAll )
					WriteMsgToBuffers ( name, msg, "red" );
				else if ( ActivityFilter.find(name) != ActivityFilter.end() )
					WriteMsgToBuffers ( name, msg, "red" );
			}
		}
	}


	LoggerClass ()
	{
		ReadConfiguration();
		lastConfRead = boost::posix_time::microsec_clock::universal_time();
		struct stat stFileInfo;
		std::string fullfilename ;
		fullfilename = (ArchConfig::Instance().GetConfigPrefix() + MsgLogFile);
		int intStat = stat((fullfilename + ".0").c_str(), &stFileInfo);

		if (intStat == 0)
			if(stFileInfo.st_size > 512)
			{
				rename( (fullfilename + ".0").c_str() , (fullfilename + ".1").c_str() );
			}

		ErrorLog.open( ( ArchConfig::Instance().GetConfigPrefix() + MsgLogFile + ".0" ).c_str() );

		if ( ! ErrorLog.is_open() )
		{
			std::cerr << "Can't open MessageLog file: " << MsgLogFile << std::endl;
			SysCall::_exit(1);
		}

		ColorMap["red"]     = "\033[1;31m";
		ColorMap["blue"]    = "\033[1;34m";
		ColorMap["lBlue"]   = "\033[21;34m";
		ColorMap["green"]   = "\033[1;32m";
		ColorMap["yellow"]   = "\033[1;33m";
		ColorMap["default"] = "\033[0m";
	}

private:

	void ReadConfiguration ()
	{
		std::string ConfFileStr( ArchConfig::Instance().GetConfigPrefix() + "logger.xml" );
		XMLConfig ConfFile( ConfFileStr );

		if ( ! ConfFile.IsLoadedSuccessfully() )
		{
			std::cerr << "Can't parse logger configuration file @ " << ConfFileStr << std::endl;
			SysCall::_exit( 1 );
		}

		if ( ! ConfFile.QueryElement( "MessageLogFile", MsgLogFile ) )
		{
			std::cerr << "MessageLogFile is not set" << std::endl;
			std::cerr << "Defaulting to MonasLog.txt" << std::endl;
			MsgLogFile = "MonasLog.txt";
		}

		if (! ConfFile.QueryElement( "LogFileVerbosityLevel", VerbosityLevel ) )
			VerbosityLevel = 0;

		VerbosityLevel = VerbosityLevel < 0 ? 0 : VerbosityLevel;

		if ( ! ConfFile.QueryElement( "MessageLogCerr", CerrEnabled ) )
			CerrEnabled = false;

		if ( ! ConfFile.QueryElement( "PollingPeriod", reparsingPeriod ) )
			reparsingPeriod = 2;

		std::vector<std::string> ActFilterStr;
		ConfFile.QueryElement( "DebugFilter", ActFilterStr );

		if ( ActFilterStr.size() == 0 )
			DebuggingMode = false;
		else
		{
			DebuggingMode = true;
			DebugAll = false;

			for ( std::vector<std::string>::const_iterator it = ActFilterStr.begin(); it != ActFilterStr.end(); it++ )
			{
				if ( (*it) == "all" )
				{
					DebugAll = true;
					break;
				}

				DebugFilter.insert( (*it) );
			}
		}

		ActFilterStr.clear();
		ConfFile.QueryElement( "MessageLogFilter", ActFilterStr );

		if ( ActFilterStr.size() == 0 )
			ActivityFilterEnabled = false;
		else
		{
			ActivityFilterEnabled = true;

			for ( std::vector<std::string>::const_iterator it = ActFilterStr.begin(); it != ActFilterStr.end(); it++ )
			{
				if ( (*it) == "all" )
				{
					ActivityFilterEnabled = false;
					break;
				}

				ActivityFilter.insert( (*it) );
			}
		}

		if ( ! ConfFile.QueryElement( "MessageLogCerrColor", ColorEnabled) )
			ColorEnabled = false;

		lastConfRead = boost::posix_time::microsec_clock::universal_time();
	}

	template< class T>
	void WriteMsgToBuffers ( std::string name, const T& msg, std::string color )
	{
		ErrorLog << name << " : " << msg << std::endl;

		if ( CerrEnabled )
		{
			if ( ColorEnabled )
				std::cerr << ColorMap[color] << name << " : " << msg << ColorMap["default"] << std::endl;
			else
				std::cerr << name << " : " << msg << std::endl;
		}
	}



	int VerbosityLevel;

	std::string MsgLogFile;
	std::ofstream ErrorLog;

	std::set<std::string> ActivityFilter;
	bool ActivityFilterEnabled;

	bool CerrEnabled;

	bool ColorEnabled;

	std::set<std::string> DebugFilter;
	bool DebuggingMode;
	bool DebugAll;

	std::map<std::string, std::string> ColorMap;

	boost::posix_time::ptime lastConfRead;
	float reparsingPeriod;

};

typedef Singleton<LoggerClass> Logger;

#endif // _logger_h_
