
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal* animal[4];

	for(int i = 0; i < 4; i++)
	{
		if (i < 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	for(int i = 0; i < 4; i++)
		delete animal[i];
	return 0;
}
