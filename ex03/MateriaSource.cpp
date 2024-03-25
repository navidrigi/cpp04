#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias_[i] = NULL;
}

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

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (materias_[i])
		{
			delete materias_[i];
			materias_[i] = NULL;
		}
	}
}

void		MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!materias_[i])
		{
			materias_[i] = materia;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*created;

	for (int i = 0; i < 4; i++)
	{
		if (type == materias_[i]->getType())
		{
			created = materias_[i]->clone();
			return created;
		}
	}
	return 0;
}
