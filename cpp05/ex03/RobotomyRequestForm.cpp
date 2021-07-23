#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target):Form("robotomy request", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other):Form("robotomy request", 72, 45), _target(other._target)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& other)
{
	(void)other;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::action() const
{
	srand(time(NULL));
	int i = rand() % 2;
	std::cout << YELLOW << "***Scary driller noises***" << RESET << std::endl;
	if (i == 0)
		std::cout << YELLOW << _target << " has been succesfully ROBOTOMIZED !!!" << RESET << std::endl;
	else
		std::cout << YELLOW << _target << "'s robotomization has failed..." << RESET << std::endl;
}