#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

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
		~Form();
		std::string const	getName() const;
		bool				getSigned() const;
		int const			getGradSign() const;
		int const			getGradExecute() const;
		void				beSigned(Bureaucrat const &b);

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

	class CannotSignException : public std::exception
	{
		private:
			std::string	_raison;
		
		public:
			CannotSignException(std::string raison):_raison(raison){}
	};
};

std::ostream	&operator<<(std::ostream &out, Form &src);

#endif