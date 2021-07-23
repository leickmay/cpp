#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();
		std::string const	_target;

	public:
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const& other);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const& other);
		~ShrubberyCreationForm();
		void	action() const;
};

#endif