#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "Bazooka.hpp"
# include "RadScorpion.hpp"
# include "SuperMutant.hpp"
# include "TurboDemon.hpp"

class Character
{
	private:
		Character();
		std::string	_name;
		int			_ap;
		AWeapon		*_weapon;

	public:
		Character(std::string const& name);
		Character(Character const& other);
		Character	&operator=(Character const& other);
		~Character();
		void	recoverAP();
		void	equip(AWeapon *w);
		void	attack(Enemy *e);
		std::string	getName() const;
		int	getAP() const;
		AWeapon	*getWeapon() const;
};

std::ostream &operator<<(std::ostream &out, Character &src);

#endif