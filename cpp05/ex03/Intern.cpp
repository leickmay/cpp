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

Form*	Intern::presidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::robotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::shrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeForm(std::string form, std::string target)
{
	typedef Form* (Intern::*createForm)(std::string target);
	createForm tab[3] = {&Intern::presidential, &Intern::robotomy, &Intern::shrubbery};
	std::string	type[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (type[i] == form)
			{
				std::cout << "Intern create " << type[i] << " form" << std::endl;
				return (this->*tab[i])(target);
			}
			if (i == 2)
				throw WrongFormException();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Intern cannot make the form : " << e.what() << std::endl;
	}
	return 0;
}