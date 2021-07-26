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
	try
	{
		Bureaucrat ldevilla("Ldevilla", 1500);
		std::cout << ldevilla;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat ckurt("Ckurt", 0);
		std::cout << ckurt;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << BLUE << "== Try to sign form : ==" << RESET << std::endl;
	Form pass("Pass Sanitaire", 20, 10);
	std::cout << pass;
	bob.signForm(pass);
	std::cout << pass;
	bob.signForm(pass);

	std::cout << std::endl << BLUE << "== Try to create invalid grad form : ==" << RESET << std::endl;
	try 
	{
		Form pouic("pouic", 160, 10);
		deustach.signForm(pouic);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}