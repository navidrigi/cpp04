#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	int		numberOfAnimals = 20;
	Animal	*animals[numberOfAnimals];

	for (int i = 0; i < numberOfAnimals; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < numberOfAnimals; i++)
		delete animals[i];

	return 0;
}
