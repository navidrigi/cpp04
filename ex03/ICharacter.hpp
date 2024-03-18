#pragma once

#include "AMateria.hpp"

class ICharacter
{
	public:
		ICharacter();
		// ICharacter(std::string const & type);
		ICharacter(const ICharacter &other);
		ICharacter	&operator=(const ICharacter &other);
		virtual ~ICharacter();
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

// abstract class because al least one of member functions is pure virtual
