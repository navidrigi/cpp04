#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
	delete brain;
}

std::string	Dog::getType() const
{
	return this->type_;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
