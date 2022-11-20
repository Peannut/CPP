#ifndef FILECLASS_H
# define FILECLASS_H

# include <iostream>
# include <fstream>
# include <limits.h>

class FileClass
{
private:
    std::ifstream   _file;
    std::string     _fileName;
    std::string     _fileContent;
    std::string     _s1;
    std::string     _s2;

public:
    int check(void);
    static int error(std::string str);
    int    sed(void);
    void    lineModifier(void);
    FileClass(std::string file, std::string s1, std::string s2);
    ~FileClass();
};

# include <iostream>
# include <fstream>

#endif