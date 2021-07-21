#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_note;

	public:
		Bureaucrat(std::string const name, int note);
		~Bureaucrat();
		std::string const	getName();
		int					getNote();
};

#endif
