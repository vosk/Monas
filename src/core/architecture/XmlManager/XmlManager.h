#ifndef XML_MANAGER_H
#define XML_MANAGER_H

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <queue>
#include <map>
#include <utility>
#include <boost/filesystem.hpp>
#include <zlib.h>

#include "../external/tinyxml_2-5-3/tinyxml.h"
/**
 * This is the XmlManager for the Monas architecvture

 * @author Kofinas Nikos aka eldr4d, 2012 kouretes team

 * \file NAOKinematics.h
 * \bug nothing known
*/

/**
 * @class XmlManager
 * This class handles every valid xml file expect the files with multiple instance of text inside a tag.
 **/
class XmlManager
{
public:
	static const char DELIMITER = '.';				/**< Delimiter to seperate nodes */
	static const char ATTRIBUTE_DELIMITER = '$';	/**< Delimiter to identify attributes */
	static const char NUMBER_DELIMITER = '~';		/**< Delimiter to identify distinct nodes */
	//static const char TEXTNUMBER_DELIMITER = '#';
	static const int MAIN_FILE = 0;
	static const int BODY_FILE = 1;
	static const int HEAD_FILE = 2;
	std::string text;										/**< The text value of the current node*/
	std::map<std::string, std::string > attributes;			/**< The attributes of the current node*/
	std::map<std::string, std::vector<XmlManager> > kids;	/**< All the children of the current node*/
private:
	std::string headPath;	/**< The path to the head files */
	std::string bodyPath;	/**< The path to the body files */
	std::string headID;		/**< The headId of the instance */
	std::string bodyID;		/**< The bodyId of the instance */
	std::string directoryPath;	/**< The directory pathe where the xml files lives :P*/
	std::vector<std::string> allFiles;	/**< All the xml files that have been read from this instance*/
	bool root;				/**< Is this instance the root instance or not*/
	unsigned int adler; 	/**< Checksum of the instance*/
	
	int fileType;			/**< Is the current node constructed by a Main a Head or a Body file*/

	/**
	* Update a value in a corresponding file for a given key and a given fileType
	* @param targetKey: the key of the node/attribute
	* @param value: the new value
	* @param fileType: the file type
	**/
	bool updateFilesValue(std::string targetKey, std::string value, int fileType);
	
	/**
	* Given a key delete the corresponding node if the fileType of the node is the given fileType
	* @param key: the key of the node
	* @param fileType: the file type
	**/
	void deleteNodesForKey(std::string key, int fileType);
	
	/**
	* Given a queue of key's find the node that is defines by the second to last key
	* @param key: the queue of key's
	**/
	XmlManager * findSecondToLastNodeForKey(std::queue<std::string> & key);
	
	/**
	* Extract the number after the NUMBER_DELIMITER (remove and get the ~ part)
	* if the string hasn't NUMBER_DELIMITER the extraction returns zero
	* @param str: the string with (or without) the NUMBER_DELIMITER
	* @param num: the number after the NUMBER_DELIMITER
	**/
	static std::string extractNumber(std::string & str, unsigned * num);
	
	/**
	* Break the key according to the DELIMITER and return a queue with each substring
	* @param key: the key for the split :P
	**/
	static std::queue<std::string> findAllSubstring(std::string  key);
	
	/**
	* Inside recursive nodes to the tree structure
	* @param XmlNode: current tiny xml node to transform and insert
	* @param filetype: from what file is this tiny xml node came?
	**/
	void insertRecursivePolicyAppend(TiXmlNode* XmlNode, int fileType);
	
	/**
	* Update a value for a given key
	* @param key: the key of the target value
	* @param value: the new value
	**/
	bool updateValueForKey(std::string key, std::string value);
	
	/**
	* Number of children of this node
	**/
	unsigned int getChildrenCount() const;
	
	/**
	* Convert an int to a string
	**/
	std::string convertInt(int number);
	
	/**
	* Compute addler32 for same data verification with external source
	**/
	void computeAddler32();

	/**
	* Return specific attribute
	* @param key: the key of the attribute
	**/
	std::string getAttribute(std::string & key);
public:

	/**
	* The basic constructor
	**/
	XmlManager()
	{
		fileType = 0;
		root = false;
	};
	
	/**
	*Initilize the tree with the files from a directory
	* @param dirPath: the directory with the xml files
	* @param headId: set the head id 
	* @param bodyId: set the body id
	* @param administrator: is this instance root or not
	**/
	XmlManager(std::string dirPath, std::string headId, std::string bodyId, bool administrator);
	
	/**
	* Get the text vector of the node 
	**/
	std::string getText();
	
	/**
	* Print the xml tree
	**/
	void prettyPrint(std::string pref);
	
	/**
	* Load a file for a specific filetype
	* @param filename: the name of the file to be loaded
	* @param filetype: main, head or body file
	**/
	bool loadFile(std::string filename, int fileType);
	
	/**
	* Load a file for all the filetypes
	* @param filename: the name of the file to be loaded
	**/
	bool loadAllFiles(std::string filename);
	
	/**
	* Find a value for a specific key (text value or attribute value
	* text value key example: firstnode.secondnode~3.lastnode~2
	* attribute value key example: firstnode.secondnode~3.lastnode~2.$attribute
	* @param key: the key of the value
	**/
	std::string findValueForKey(std::string key);
	
	/**
	* Find a key of a node where a subnode value of this node equales the target value
	* E.g. there are 3 nodes with the name outerNodes and they have subnodes spam.interest
	* retutn the key of the node where spam.interest.text equals targetValue (works with attributes too)
	* @param nodeKey: the outerNode key 
	* @param subnodeKey: the key of the subnode with the interesting value
	* @param value: the target value 
	**/
	std::string keyOfNodeForSubvalue(std::string nodeKey, std::string subnodeKey, std::string value);
	
	/**
	* Write multiple pairs of keys and data
	* @param writeData: a pair of key with the correspondig data value
	**/
	bool burstWrite(std::vector<std::pair<std::string, std::string> > writeData);
	
	/**
	* Find the node count for a specific key
	* @param key: the generic key of the node (without e.g. ~2)
	**/
	int numberOfNodesForKey(std::string key);
	
	/**
	* Find the children count of a father
	* @param key: the key of the father
	**/
	int numberOfChildrenForKey(std::string key);
	
	/**
	* Find the count for only the children with different name of a father
	* E.g. if there are two children with the name action, the count will be increased only by one
	* @param key: the key of the father
	**/
	int numberOfUniqueChildrenForKey(std::string key);
	
	/**
	* Return the corresponding XmlManagerNode for a given key
	* @param key: the key of the node
	**/
	XmlManager* findNodeForKey(std::string key);
	
	/**
	* Return the path where the head files are stored
	**/
	std::string getHeadPath();
	
	/**
	* Return the path where the body files are stored
	**/
	std::string getBodyPath();
	
	/**
	* Return the headId of the current instance
	**/
	std::string getHeadID();
	
	/**
	* Return the bodyId of the current instance
	**/
	std::string getBodyID();
	
	/**
	* Return the checksum of the current instance
	**/
	unsigned int getChecksum();
};

typedef XmlManager XmlManagerNode;

#endif // XML_MANAGER_H
