#include <iostream>
#include "test.hpp"

void	presenter(Vehicule const& v)
{
	v.affiche();
}

int	main()
{
	Moto m;
	Vehicule *v(0);

	v = new Voiture;
	v->affiche();
	delete v;
	presenter(m);
	return 0;
}