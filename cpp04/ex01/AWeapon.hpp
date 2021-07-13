#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:
		AWeapon();

	protected:
		int			_apcost;
		int			_damage;
		std::string	_name;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const& other);
		AWeapon	&operator=(AWeapon const& other);
		~AWeapon();
		std::string const getName() const;
		int	getAPCost() const;
		int	getDamage() const;
		const void attack() const = 0;
};

#endif