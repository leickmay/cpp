#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const& other);
		Intern	&operator=(Intern const& other);
		~Intern();
		Form*	makeForm(std::string form, std::string target);

		class WrongFormException : public std::exception
		{
			const char* what() const throw()
			{
				return "\e[0;31mWrong type of form !\e[0m";
			}
		};
};

#endif