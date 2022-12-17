#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
private:
    std::string *ideas;
public:
    Brain();
    Brain(const Brain &other);
    Brain   &operator=(Brain &other);
    std::string *getIdeas(void);
    ~Brain();
};

#endif