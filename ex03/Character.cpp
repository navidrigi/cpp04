#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const &name) : name_(name)
{
	for (int i = 0; i < 4; i++)
		slots_[i] = NULL;
}

Character::Character(const Character &other) : ICharacter(other) {}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
		ICharacter::operator=(other);
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (slots_[i])
		{
			delete slots_[i];
			slots_[i] = NULL;
		}
	}
}

std::string const	&Character::getName() const
{
	return name_;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!slots_[i])
		{
			slots_[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >=0 && idx <= 3 && slots_[idx])
		slots_[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return;
	if (slots_[idx])
		slots_[idx]->use(target);
}
