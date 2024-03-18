#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(std::string const &type)
{
	type_ = type;
}

Cure::Cure(const Cure &other)
{
	*this = other;
}

Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Cure::~Cure() {}

Cure	*Cure::clone() const
{
	Cure *ptr = new Cure();
	return ptr;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals "
			  << target.getName()
			  << "'s wounds *"
			  << std::endl;
}
