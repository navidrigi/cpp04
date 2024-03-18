#pragma once

#include "IMateriSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*materias_[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource	&operator=(const MateriaSource &other);
		~MateriaSource();
		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);
};
