#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const int numAnimals = 10;
	Animal* animals[numAnimals];
	WrongAnimal* wrongAnimals[numAnimals];

	for (int i = 0; i < numAnimals; ++i)
	{
		if (i % 2 == 0)
		{
			animals[i] = new Dog();
			wrongAnimals[i] = new WrongCat();
		}
		else
		{
			animals[i] = new Cat();
			wrongAnimals[i] = new WrongAnimal();
		}
	}

	for (int i = 0; i < numAnimals; ++i)
	{
		std::cout << "Animal " << i << " is a " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
		std::cout << "WrongAnimal " << i << " is a " << wrongAnimals[i]->getType() << std::endl;
		wrongAnimals[i]->makeSound();
	}

	for (int i = 0; i < numAnimals; ++i)
	{
		delete animals[i];
		delete wrongAnimals[i];
	}

	return 0;
}

// #include "Cat.hpp"
// #include "Dog.hpp"
// #include "WrongCat.hpp"

// int main()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const Animal* j = new Dog();
// 	const WrongAnimal* i = new WrongCat();

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); // will output the cat sound!
// 	j->makeSound(); // will output the cat sound!
// 	meta->makeSound(); // will output animal sound!

// 	delete j;
// 	delete i;
// 	delete meta;

// 	return 0;
// }
