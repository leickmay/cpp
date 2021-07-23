#ifndef PRESENDENTIALPARDONFORM_HPP
# define PRESENDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();
		std::string const	_target;

	public:
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const& other);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const& other);
		~PresidentialPardonForm();
		void	action() const;
};

#endif