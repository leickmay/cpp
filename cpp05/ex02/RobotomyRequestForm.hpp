#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();
		std::string const	_target;

	public:
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const& other);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const& other);
		~RobotomyRequestForm();
		void	action() const;
};

#endif