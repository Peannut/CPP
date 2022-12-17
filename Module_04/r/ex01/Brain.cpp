#include "Brain.hpp"
#include "stdio.h"

Brain::Brain()
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "Brain Idea";
    }
}

Brain::Brain(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
}

std::string    *Brain::getIdeas(void)
{
    return (this->ideas);
}

Brain   &Brain::operator=(Brain &other)
{
    
  if (this != &other)
  {
    std::string *ideas_slot = other.getIdeas();
    delete[] this->ideas;
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = ideas_slot[i];
    }
  }
    return (*this);    
}

Brain::~Brain()
{
    if (this->ideas)
    {
     delete[] this->ideas;
     this->ideas = nullptr;
    }
}