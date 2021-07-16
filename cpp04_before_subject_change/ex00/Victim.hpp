#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	public:
		Victim(std::string name);
		~Victim();
		Victim(Victim const& other);
		Victim& operator=(Victim const& other);
		std::string	getName() const;
		virtual void	getPolymorphed() const;

	protected:
		std::string _name;

	private:
		Victim();
};

std::ostream	&operator<<(std::ostream &out, Victim &src);

#endif