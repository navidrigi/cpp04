#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	type_;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal	&operator=(const WrongAnimal &other);
		virtual	~WrongAnimal();
		virtual std::string		getType() const;
		virtual void			makeSound() const;
};
