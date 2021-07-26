#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

# define BLUE "\e[0;34m"
# define RESET "\e[0m"

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
		std::string const	getName();
		int					getGrade();
		void				incrementGrade();
		void				decrementGrade();

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return "\e[0;31mGrade is too high ! (max is 1)\e[0m";
		}
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return "\e[0;31mGrade is too low ! (min is 150)\e[0m";
		}
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &src);

#endif
