#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const& other);
		Intern	&operator=(Intern const& other);
		~Intern();
		Form*	makeForm(std::string form, std::string target);
		Form*	presidential(std::string target);
		Form*	robotomy(std::string target);
		Form*	shrubbery(std::string target);

		class WrongFormException : public std::exception
		{
			const char* what() const throw()
			{
				return "\e[0;31mIntern cannot make the form : Wrong type of form !\e[0m";
			}
		};
};

#endif