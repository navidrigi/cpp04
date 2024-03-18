#pragma once

#include "AMateria.hpp"

class Character
{
	public:
		Character();
		Character(std::string const &type);
		Character(const Character &other);
		Character	&operator=(const Character &other);
		~Character();
		std::string const	&getType() const; //Returns the materia type
		Character			*clone() const;
		void				use(ICharacter &target);
};
