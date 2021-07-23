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

	Bureaucrat ldevilla("Ldevilla", 1500);
	Bureaucrat ckurt("Ckurt", 0);

	Form("Pass Sanitaire", 20, 10);
	
}