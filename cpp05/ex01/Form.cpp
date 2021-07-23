#include "Form.hpp"

Form::Form(std::string const name, int const gradSign, int const gradExecute):_name(name), _gradSign(gradSign), _gradExecute(gradExecute), _signed(false)
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

Form::Form(Form const& other):_name(other._name), _gradSign(other._gradSign), _gradExecute(other._gradExecute), _signed(other._signed)
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

int const			Form::getGradSign() const
{
	return _gradSign;
}

int const			Form::getGradExecute() const
{
	return _gradExecute;
}

void				Form::beSigned(Bureaucrat const &b)
{
	try
	{
		if (b.getGrade() > _gradSign)
			throw Form::CannotSignException("grad is too low");
		if (_signed == true)
			throw Form::CannotSignException("form already signed");
		_signed = true;
	}
	catch(const std::exception& e)
	{
		std::
	}
	
}