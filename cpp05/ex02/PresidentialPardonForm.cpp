#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target):Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& other):Form("PresidentialPardonForm", 25, 5), _target(other._target)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& other)
{
	(void)other;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::action() const
{
	std::cout << YELLOW << _target << " has been forgiven by Zafod Beeblebrox" << RESET << std::endl;
}