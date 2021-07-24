#include "Display.hpp"

Display::Display(std::string s):_s(s)
{
}

Display::Display(Display const& other):_s(other._s)
{
}

Display&	Display::operator=(Display const& other)
{
	(void)other;
	return *this;
}

Display::~Display()
{
}

void	Display::displayChar() const
{
	char	c;
	long	l;

	std::cout << "char : ";
	try
	{
		if (isValidStr(_s))
			throw Display::NoConvertException();
		l = stol(_s);
		if (l > CHAR_MAX || l < CHAR_MIN)
			throw Display::NoConvertException();
		c = static_cast<char>(l);
		if (!(isprint(c)))
			throw Display::NonDisplayableException();
		std::cout << c << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Display::displayInt() const
{
	int		i;
	long	l;

	std::cout << "int : ";
	try
	{
		if (isValidStr(_s))
			throw Display::NoConvertException();
		l = stol(_s);
		if (l > INT_MAX || l < INT_MIN)
			throw Display::NoConvertException();
		i = static_cast<int>(l);
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Display::displayFloat() const
{
	float		f;
	double		d;

	d = stod(_s);
	f = static_cast<float>(d);
	std::cout << "float : ";
	if (f == ceil(f))
		std::cout << std::setprecision(1) << std::fixed;
	std::cout << f << "f" << std::endl;
}


void	Display::displayDouble() const
{
	double		d;

	d = stod(_s);
	std::cout << "double : ";
	if (d == ceil(d))
		std::cout  << std::fixed<< std::setprecision(1);
	std::cout << d << std::endl;
}