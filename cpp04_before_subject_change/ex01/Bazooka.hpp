#ifndef BAZOOKA_HPP
# define BAZOOKA_HPP

# include "AWeapon.hpp"

class Bazooka : public AWeapon
{
	private:
		std::string _attackoutput;

	public:
		Bazooka();
		Bazooka(Bazooka const& other);
		Bazooka &operator=(Bazooka const& other);
		virtual ~Bazooka();
		virtual void	attack() const;
};

#endif