#include "FileClass.hpp"

int FileClass::error(std::string str) {
    std::cout << str << std::endl;
    return (-1);
}

void    FileClass::lineModifier(void) {
    size_t  first;

    first = _fileContent.find(_s1);
    if (first != SIZE_MAX)
    {
        _fileContent.erase(first, _s1.length());
        _fileContent.insert(first, _s2);
    } 
    if (_fileContent.find(_s1) != SIZE_MAX)
        lineModifier();
}

int    FileClass::sed() {

    std::ofstream   newFile(_fileName += ".replace");

    if (newFile.fail())
         return((FileClass::error("File failed")));
    while (getline(_file, _fileContent))
    {
        lineModifier();
        if (!_file.eof())
            newFile << _fileContent << std::endl;
        else
             newFile << _fileContent;
    }

    if (newFile.is_open())
        newFile.close();
    return (0);
}

FileClass::FileClass(std::string file, std::string s1, std::string s2)
{
    _file.open(file);
    _fileName = file;
    
    
    _s1 = s1;
    _s2 = s2;
}

int FileClass::check(void) {
    if (_file.fail())
        return((FileClass::error("File failed")));
    if ( _file.peek() == std::ifstream::traits_type::eof() )
        return((FileClass::error("File empty")));
    return (0);
}

FileClass::~FileClass()
{
    if (_file.is_open())
        _file.close();
}