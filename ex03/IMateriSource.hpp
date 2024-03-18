#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		IMateriaSource();
		IMateriaSource(std::string const &type);
		IMateriaSource(const IMateriaSource &other);
		IMateriaSource	&operator=(const IMateriaSource &other);
		~IMateriaSource();
		// virtual std::string const & getName() const = 0;
		// virtual void equip(AMateria* m) = 0;
		// virtual void unequip(int idx) = 0;
		// virtual void use(int idx, ICharacter& target) = 0;
		void	learnMateria(AMateria*);
		createMateria(std::string const &);
};
