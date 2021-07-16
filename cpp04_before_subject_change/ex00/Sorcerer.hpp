#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public :
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(Sorcerer const& other);
		Sorcerer& operator=(Sorcerer const& other);
		void	introduce() const;
		std::string	getName() const;
		std::string	getTitle() const;
		void	polymorph(Victim const &) const;

	private :
		std::string	_name;
		std::string	_title;
		Sorcerer();
};

std::ostream &operator<<(std::ostream &out, Sorcerer &src);

#endif