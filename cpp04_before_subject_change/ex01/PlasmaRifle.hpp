#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:
		std::string _attackoutput;

	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const& other);
		PlasmaRifle &operator=(PlasmaRifle const& other);
		virtual ~PlasmaRifle();
		virtual void	attack() const;
};

#endif