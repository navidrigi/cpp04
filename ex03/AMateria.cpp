#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : type_(type) {}

AMateria::AMateria(const AMateria &other) : type_(other.type_) {}

AMateria	&AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		type_ = other.type_;
	return *this;
}

AMateria::~AMateria() {}

std::string const	&AMateria::getType() const
{
	return type_;
}
