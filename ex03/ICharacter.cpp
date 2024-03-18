#include "ICharacter.hpp"

ICharacter::ICharacter() {}

// ICharacter::ICharacter(std::string const &type)
// {
// }

ICharacter::ICharacter(const ICharacter &other)
{
	*this = other;
}

ICharacter	&ICharacter::operator=(const ICharacter &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

ICharacter::~ICharacter() {}
