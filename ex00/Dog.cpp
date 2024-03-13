#include "Dog.hpp"

Dog::Dog()
{
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
}

std::string	Dog::getType() const
{
	return this->type_;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
