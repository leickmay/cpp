#include "Character.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << "=====MAIN OF THE SUBJECT=====" << std::endl;
	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std:: cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << std::endl;
	std::cout << "=====COMPLEMENTARY TESTS=====" << std::endl;

	Character* jacques = new Character("Jacques");
	std::cout << *jacques;

	Enemy* d = new TurboDemon();

	AWeapon* baz = new Bazooka();
	jacques->equip(baz);
	std::cout << *jacques;
	jacques->attack(d);
	jacques->attack(d);
	std::cout << *jacques;
	jacques->attack(d);
	jacques->recoverAP();
	std::cout << *jacques;
	jacques->attack(d);
	jacques->recoverAP();
	jacques->attack(d);

	delete me;
	delete b;
	delete pr;
	delete pf;
	delete jacques;
	delete d;
	delete baz;

	return 0;
}