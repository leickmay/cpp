#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
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
}

void			Bureaucrat::executeForm(Form const& f) const
{
	try
	{
		if (_grade > f.getGradExecute())
			throw Bureaucrat::GradeTooLowException();
		std::cout << _name << " executs " << f.getName() << std::endl;
		f.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " cannot execute form : " << e.what() << std::endl;
	}
	
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return out;
}