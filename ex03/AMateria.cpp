#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type)
{
	type_ = type;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria	&AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

AMateria::~AMateria() {}

std::string const	&AMateria::getType() const
{
	return type_;
}

// void	AMateria::use(ICharacter &target);
