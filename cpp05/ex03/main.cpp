#include "Bureaucrat.hpp"
//#include "Form.hpp"
//#include "PresidentialPardonForm.hpp"
//#include "RobotomyRequestForm.hpp"
//#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat bob("Bob", 2);
	std::cout << bob;
	bob.incrementGrade();
	std::cout << bob;
	bob.incrementGrade();
	std::cout << bob;

	Bureaucrat deustach("Deustach", 149);
	std::cout << deustach;
	deustach.decrementGrade();
	std::cout << deustach;
	deustach.decrementGrade();
	std::cout << deustach;

	std::cout << std::endl << BLUE << "== Try to create Bureaucrats with invalid grade : ==" << RESET << std::endl;
	Bureaucrat ldevilla("Ldevilla", 1500);
	Bureaucrat ckurt("Ckurt", 0);

	std::cout << std::endl << BLUE << "== Try to sign form : ==" << RESET << std::endl;
	PresidentialPardonForm pass("Michel");
	deustach.signForm(pass);
	std::cout << pass;
	bob.signForm(pass);
	std::cout << pass;
	bob.signForm(pass);

	std::cout << std::endl << BLUE << "== Try to execute form : ==" << RESET << std::endl;
	Bureaucrat marco("Marco", 70);
	pass.execute(bob);
	pass.execute(deustach);
	RobotomyRequestForm rob("Flignoti");
	rob.execute(bob);
	bob.signForm(rob);
	rob.execute(bob);
	ShrubberyCreationForm tree("Tree");
	marco.executeForm(tree);
	marco.signForm(tree);
	marco.executeForm(tree);
	std::cout << rob;

	std::cout << std::endl << "==Here come the intern==" << std::endl;
	Intern corenting;
	Form* rrf;
	rrf = corenting.makeForm("robotomy request", "Bender");
	marco.signForm(*rrf);
	marco.executeForm(*rrf);
	bob.executeForm(*rrf);

	delete rrf;
}