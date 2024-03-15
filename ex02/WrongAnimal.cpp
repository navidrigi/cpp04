#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal")
{
}

WrongAnimal::WrongAnimal(std::string type) : type_(type)
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "No sound for a general WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type_;
}
