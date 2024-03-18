#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string const &type)
{
	type_ = type;
}

Ice::Ice(const Ice &other)
{
	*this = other;
}

Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Ice::~Ice() {}

Ice	*Ice::clone() const
{
	Ice	*ptr = new Ice();
	return ptr;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "
			  << target.getName()
			  << " *"
			  << std::endl;
}
