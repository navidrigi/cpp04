#include "Animal.hpp"

Animal::Animal() : type_("Animal")
{
}

Animal::Animal(std::string type) : type_(type)
{
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal's destructor called" << std::endl;
}

// void	Animal::makeSound() const
// {
// 	std::cout << "No sound for a general Animal" << std::endl;
// }

std::string	Animal::getType() const
{
	return this->type_;
}
