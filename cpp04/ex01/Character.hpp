#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "RadScorpion.hpp"
# include "SuperMutant.hpp"

class Character
{
	private:
		Character();
		std::string	_name;
		int			_ap;
		void		*_weapon;

	public:
		Character(std::string const& name);
		Character(Character const& other);
		Character	&operator=(Character const& other);
		~Character();
		void	recoverAP();
		void	equip(AWeapon *w);
		void	attack(Enemy *e);
		std::string	getName() const	{return _name;};
		int	getAP() const			{return _ap;};
		void	*getWeapon() const	{return _weapon;};
};



#endif