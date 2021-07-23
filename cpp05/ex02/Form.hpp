#ifndef FORM_HPP
# define FORM_HPP

//# include "Bureaucrat.hpp"
# include <iostream>

# define BLUE "\e[0;34m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradSign;
		int const			_gradExecute;
		Form();

	public:
		Form(std::string const name, int const gradSign, int const gradExecute);
		Form(Form const& other);
		Form	&operator=(Form const& other);
		virtual ~Form();
		std::string const	getName() const;
		bool				getSigned() const;
		int					getGradSign() const;
		int					getGradExecute() const;
		void				beSigned(Bureaucrat const &b);
		virtual void		action() const = 0;
		void				execute(Bureaucrat const& executor) const;

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

	class AlreadySignedException : public std::exception
	{
		const char* what() const throw()
		{
			return "\e[0;31mform is already signed !\e[0m";
		}
	};

	class NotSignedException : public std::exception
	{
		const char* what() const throw()
		{
			return "\e[0;31mform has not been signed !\e[0m";
		}
	};
};

std::ostream	&operator<<(std::ostream &out, Form &src);

#endif