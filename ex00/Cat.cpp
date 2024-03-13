#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
}

std::string	Cat::getType() const
{
	return this->type_;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
