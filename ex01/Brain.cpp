#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain's destructor called" << std::endl;
}
