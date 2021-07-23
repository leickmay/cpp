#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

Bureaucrat::Bureaucrat(Bureaucrat const& other):_name(other._name), _grade(other._grade)
{
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& other)
{
	if (this != &other)
		_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string const	Bureaucrat::getName() const
{
	return _name;
}

int					Bureaucrat::getGrade() const
{
	return _grade;
}

void				Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_grade--;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void				Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade++;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void				Bureaucrat::signForm(Form &f)
{
	f.beSigned(*this);
	if (f.getSigned() == true)
		std::cout << _name << " signs " << f.getName() << std::endl;
	else
		std::cout << _name << " cannot sign because "//////////////// << std::endl;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return out;
}