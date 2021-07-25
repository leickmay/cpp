#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const name, int const gradSign, int const gradExecute):_name(name), _signed(false), _gradSign(gradSign), _gradExecute(gradExecute)
{
	try
	{
		if (_gradSign > 150 || _gradExecute > 150)
			throw Form::GradeTooLowException();
		if (_gradSign < 1 || _gradExecute < 1)
			throw Form::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

Form::Form(Form const& other):_name(other._name), _signed(other._signed), _gradSign(other._gradSign), _gradExecute(other._gradExecute)
{
}

Form&	Form::operator=(Form const& other)
{
	if (this != &other)
		_signed = other._signed;
	return *this;
}

Form::~Form()
{
}

std::string const	Form::getName() const
{
	return _name;
}

bool				Form::getSigned() const
{
	return _signed;
}

int					Form::getGradSign() const
{
	return _gradSign;
}

int					Form::getGradExecute() const
{
	return _gradExecute;
}

void				Form::beSigned(Bureaucrat const &b)
{
	try
	{
		if (b.getGrade() > _gradSign)
			throw Form::GradeTooLowException();
		if (_signed == true)
			throw Form::AlreadySignedException();
		_signed = true;
		std::cout << b.getName() << " signs " << _name << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << b.getName() << " cannot sign because " << e.what() << std::endl;
	}
	
}

std::ostream	&operator<<(std::ostream &out, Form &src)
{
	std::string s;
	if (src.getSigned() == true)
		s = "is signed";
	else
		s = "isn't signed";
	out << src.getName() << " is a form with a sign grad of " << src.getGradSign() << ", an execute grad of " << src.getGradExecute() << ", and " << s << std::endl;
	return out;
}