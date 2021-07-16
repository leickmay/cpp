#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:
		AWeapon();

	protected:
		std::string	_name;
		int			_apcost;
		int			_damage;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const& other);
		AWeapon	&operator=(AWeapon const& other);
		virtual ~AWeapon();
		std::string const getName() const;
		int	getAPCost() const;
		int	getDamage() const;
		virtual void attack() const = 0;
};

#endif