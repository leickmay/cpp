#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const& other)
{
	(void)other;
}

Intern&	Intern::operator=(Intern const& other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
}



Form*	Intern::makeForm(std::string form, std::string target)
{
	try
	{
		if (form != "presidential pardon" && form != "robotomy request" && form != "shrubbery creation")
			throw WrongFormException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}