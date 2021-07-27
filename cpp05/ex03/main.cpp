#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{

	Bureaucrat bob("Bob", 2);
	Bureaucrat fabieng("Fabieng", 70);
	std::cout << BLUE << "==Here come the intern==" << RESET << std::endl;
	Intern corenting;
	Form* rrf;
	rrf = corenting.makeForm("robotomy request", "Bender");
	bob.executeForm(*rrf);
	fabieng.signForm(*rrf);
	fabieng.executeForm(*rrf);
	bob.executeForm(*rrf);

	delete rrf;
}