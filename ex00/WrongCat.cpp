#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor called" << std::endl;
}

std::string	WrongCat::getType() const
{
	return this->type_;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
