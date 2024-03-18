#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria	*slots_[4];
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &other);
		Character	&operator=(const Character &other);
		~Character();
		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};
