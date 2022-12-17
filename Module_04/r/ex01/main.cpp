#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main( void )
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	const Animal* animal_array[100];

	for (size_t i = 0; i < 50; i++)
	{
		animal_array[i] = new Dog();
	}
	for (size_t i = 50; i < 100; i++)
	{
		animal_array[i] = new Cat();
	}

	for (size_t i = 0; i < 50; i++)
	{
		if (animal_array && animal_array[i])
		{
			delete animal_array[i];
			animal_array[i] = nullptr;
		}
	}
	for (size_t i = 50; i < 100; i++)
	{
		if (animal_array && animal_array[i])
		{
			delete animal_array[i];
			animal_array[i] = nullptr;
		}
	}



	

	return (0);
}