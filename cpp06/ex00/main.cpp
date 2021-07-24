#include "Display.hpp"

bool	checkErrorNbArgs(int ac)
{
	try
	{
		if (ac != 2)
			throw Display::NbArgsException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return true;
	}
	return false;
}

bool	isValidStr(std::string s)
{
	if (s == "-inf" || s == "-inff" || s == "inf" || s == "inff" || s == "+inf" \
	|| s == "+inff" || s == "nan" || s == "nanf")
		return true;
	return false;
}

bool	checkErrorArg(std::string s)
{
	if (isValidStr(s))
		return false;

	try
	{
		//Check first char
		if (!isdigit(s[0]) && s[0] != '+' && s[0] != '-')
			throw Display::WrongArgException();

		//Check if + or - are alone
		if ((s[0] == '+' || s[0] == '-') && s.length() == 1)
			throw Display::WrongArgException();

		for (size_t i = 0; i < s.length(); i++)
		{
			//Check if there is a non authorized char
			if (!isdigit(s[i]) && i != 0 && s[i] != '.' && s[i] != 'f')
				throw Display::WrongArgException();

			//Check if the dot is the last char
			if (s[i] == '.' && i == s.length() - 1)
				throw Display::WrongArgException();

			//Check if the f is not the last char
			if (s[i] == 'f' && i != s.length() - 1)
				throw Display::WrongArgException();

			//Check if there is more than one dot
			if (s[i] == '.')
			{
				for (size_t j = i + 1; j < s.length(); j++)
				{
					if (s[j] == '.')
						throw Display::WrongArgException();
				}
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return true;
	}
	return false;
}


int main(int ac, char **av)
{
	if (checkErrorNbArgs(ac))
		return 1;
	std::string const s = av[1];
	if (checkErrorArg(s))
		return 1;

	Display displayer(s);
	displayer.displayChar();
	displayer.displayInt();
	displayer.displayFloat();
	displayer.displayDouble();
	return 0;
}

