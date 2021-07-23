#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target):Form("shrubbery creation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other):Form("shrubbery creation", 145, 137), _target(other._target)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& other)
{
	(void)other;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream fd(_target + "_shrubbery");
	std::string	s = "          .     .  .      +     .      .          .\n     .       .      .     #       .           .\n        .      .         ###            .      .      .\n      .      .   \"#:. .:##\"##:. .:#\"  .      .\n          .      . \"####\"###\"####\"  .\n       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n  .             \"#########\"#########\"        .        .\n        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n                .\"##\"#####\"#####\"##\"           .      .\n    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n      .     \"#######\"##\"#####\"##\"#######\"      .     .\n    .    .     \"#####""#######""#####\"    .      .\n            .     \"      000      \"    .     .\n       .         .   .   000     .        .       .\n.. .. ..................O000O........................ ...... ...\n";
	fd << s;
}