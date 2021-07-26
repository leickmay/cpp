#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));
	Bureaucrat bob("Bob", 2);
	Bureaucrat deustach("Deustach", 149);
	Bureaucrat marco("Marco", 70);

	std::cout << std::endl << BLUE << "== Try to sign form : ==" << RESET << std::endl;
	PresidentialPardonForm pass("Michel");
	RobotomyRequestForm rob("Flignoti");
	ShrubberyCreationForm tree("Tree");
	RobotomyRequestForm notSigned("NotSigned");

	deustach.signForm(pass);
	std::cout << pass;
	bob.signForm(pass);
	std::cout << pass;
	bob.signForm(pass);
	bob.signForm(rob);
	marco.signForm(tree);

	std::cout << std::endl << BLUE << "== Try to execute form : ==" << RESET << std::endl;
	
	pass.execute(bob);
	pass.execute(deustach);
	rob.execute(bob);
	rob.execute(bob);
	marco.executeForm(tree);
	marco.executeForm(tree);
	marco.executeForm(notSigned);
	notSigned.execute(marco);
}