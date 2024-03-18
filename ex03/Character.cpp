#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const &name)
{
	name_ = name;
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

Character::~Character() {}

std::string const	&Character::getName() const
{
	return name_;
}

void	Character::equip(AMateria *m);

void	Character::unequip(int idx);

void	Character::use(int idx, ICharacter &target);
