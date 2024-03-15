#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	type_;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		Animal	&operator=(const Animal &other);
		virtual	~Animal();
		virtual std::string		getType() const;
		virtual void			makeSound() const = 0;
};
