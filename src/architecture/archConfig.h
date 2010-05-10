#ifndef _archConfig_h_
#define _archConfig_h_ 1

#include <string>
#include <iostream>
#include <fstream>

#include "tools/XMLConfig.h"
#include "../config/config.h"
#include "hal/syscall.h"

class ArchConfig {

    public:
        
        const std::string GetConfigPrefix () const { return ConfigPrefix; }

        const std::string GetThreadType () const { return ThreadType; }

        const std::string GetAgentCfgFile () const { return AgentCfgFile; }


        static ArchConfig* Instance () {
            static ArchConfig Ar;
            return &Ar;
        }

    private:

        ArchConfig () {

            std::string ConfFilePrefix;

            std::ifstream _testConf ( GlobalConf::Instance()->ConfigurationFile().c_str() );
            std::ifstream _testConfAlt (GlobalConf::Instance()->ConfigurationFileAlter().c_str() );

            if ( _testConf.is_open() ) { 
                std::cout<<"Configuration file found @ "<<GlobalConf::Instance()->ConfigurationFile()<<std::endl;
                ConfFilePrefix = GlobalConf::Instance()->ConfigurationFile();
            }
            else if ( _testConfAlt.is_open() ) {
                std::cout<<"Configuration file found @ "<<GlobalConf::Instance()->ConfigurationFileAlter()<<std::endl;
                ConfFilePrefix = GlobalConf::Instance()->ConfigurationFileAlter();
            }
            else {
                std::cerr<<"Configuration file not found either @ "<<GlobalConf::Instance()->ConfigurationFile()<<std::endl;
                std::cerr<<"Configuration file not found or @ "<<GlobalConf::Instance()->ConfigurationFileAlter()<<std::endl;
                SysCall::_exit( 1 );
            }

            _testConf.close();
            _testConfAlt.close();

            ConfigPrefix.assign( ConfFilePrefix, 0, ConfFilePrefix.find_last_of("/")+1 );  //FIXME no '/' ?, end in '/'

            std::cout<<"Setting config prefix @ "<<ConfigPrefix<<std::endl;


            XMLConfig ConfFile( ConfFilePrefix );
            if ( ! ConfFile.IsLoadedSuccessfully() ) {
                std::cerr<<"Can't parse initial configuration file @ "<<ConfFilePrefix<<std::endl;
                SysCall::_exit( 1 );
            }

            if ( ! ConfFile.QueryElement( "AgentConfigurationFile", AgentCfgFile ) ) {
                std::cerr<<"The initial configuration file is not accepted"<<std::endl;
                std::cerr<<"AgentConfigurationFile is not set"<<std::endl;
                SysCall::_exit(1);
            }

            if ( ! ConfFile.QueryElement( "ThreadType", ThreadType ) ) 
                ThreadType = "PThread";

        }         

        std::string ConfigPrefix;

        std::string ThreadType;
        std::string AgentCfgFile;

};

#endif // _archConfig_h_
