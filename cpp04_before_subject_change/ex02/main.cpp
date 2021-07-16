#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int	main()
{
	std::cout << "=====MAIN OF THE SUBJECT=====" << std::endl;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << std::endl << "=====COMPLEMENTARY TESTS=====" << std::endl;
	std::cout << "Copy constructor : " << std::endl << std::endl;
	ISpaceMarine* jean = new TacticalMarine;
	ISpaceMarine* marc = new AssaultTerminator;
	
	ISquad* vlc2 = new Squad;
	vlc2->push(jean);
	vlc2->push(marc);
	//ISquad* copy = vlc2;
	ISquad *copy(vlc2);
	for (int i = 0; i < copy->getCount(); ++i)
	{
		ISpaceMarine* cur2 = copy->getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}
	delete vlc2;
	return 0;
}