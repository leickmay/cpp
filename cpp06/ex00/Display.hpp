#ifndef DISPLAY_HPP
# define DISPLAY_HPP

# include <iomanip>
# include <iostream>
# include <cmath>
# include <limits>

class Display
{
	private:
		std::string const	_s;
		Display();

	public:
		Display(std::string s);
		Display(Display const& other);
		Display	&operator=(Display const& other);
		~Display();
		void	displayChar() const;
		void	displayInt() const;
		void	displayFloat() const;
		void	displayDouble() const;

	class NoConvertException : public std::exception
	{
		const char* what() const throw()
		{
			return "impossible";
		}
	};

	class NonDisplayableException : public std::exception
	{
		const char* what() const throw()
		{
			return "Non displayable";
		}
	};

	class NbArgsException : public std::exception
	{
		const char* what() const throw()
		{
			return "The program needs one argument.";
		}
	};

	class WrongArgException : public std::exception
	{
		const char* what() const throw()
		{
			return "Argument is wrong. It must be a char, int, float or double.";
		}
	};
};

bool	isValidStr(std::string s);

#endif
