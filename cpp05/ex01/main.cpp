#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	Form pass("Pass Sanitaire", 20, 10);
	deustach.signForm(pass);
	std::cout << pass;
	bob.signForm(pass);
	std::cout << pass;
	bob.signForm(pass);
}