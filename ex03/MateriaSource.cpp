#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

MateriaSource::~MateriaSource() {}

void		MateriaSource::learnMateria(AMateria *materia);

AMateria	*MateriaSource::createMateria(std::string const &type);
