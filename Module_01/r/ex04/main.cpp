#include "FileClass.hpp"

int main(int argc, char **argv) {

    if (argc != 4)
        return(FileClass::error("The Program only takes three parameters in the following order: a filename and two strings, s1 and s2."));
    FileClass   file(argv[1], argv[2], argv[3]);
    if (file.check() == -1)
        return(-1);
    if (file.sed() == -1)
        return(-1);
   return (0);
}