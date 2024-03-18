#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
	protected:
		std::string	type_;
	public:
		IMateriaSource();
		IMateriaSource(std::string const &type);
		IMateriaSource(const IMateriaSource &other);
		IMateriaSource	&operator=(const IMateriaSource &other);
		virtual ~IMateriaSource();
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
};
