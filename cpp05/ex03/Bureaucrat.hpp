#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const& other);
		Bureaucrat	&operator=(Bureaucrat const& other);
		~Bureaucrat();
		std::string const	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(Form &f);
		void				executeForm(Form const& f) const;

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return "\e[0;31mGrade is too high !\e[0m";
		}
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return "\e[0;31mGrade is too low !\e[0m";
		}
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &src);

#endif
