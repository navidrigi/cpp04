#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &type)
{
}

Character::Character(const Character &other)
{
	*this = other;
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Character::~Character()
{
}

std::string const	&Character::getType() const; //Returns the materia type

Character	*Character::clone() const;

void	Character::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "
			  << target
			  << " *"
			  << std::endl;
}
