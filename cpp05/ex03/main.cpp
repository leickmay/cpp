#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{

	Bureaucrat bob("Bob", 2);
	Bureaucrat fabieng("Fabieng", 70);
	std::cout << BLUE << "==Here come the intern==" << RESET << std::endl;
	Intern corenting;
	Form* rrf;
	try
	{
		rrf = corenting.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Form* badForm;
	try
	{
		badForm = corenting.makeForm("Wrong form", "Wrong guy");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	bob.executeForm(*rrf);
	fabieng.signForm(*rrf);
	fabieng.executeForm(*rrf);
	bob.executeForm(*rrf);

	delete rrf;
}