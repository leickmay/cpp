#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	std::cout << "=====Main of the subject=====" << std::endl << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << "=====Complementary tests=====" << std::endl << std::endl;

	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Ice());
	IMateriaSource* copy(src2);
	ICharacter* mich = new Character("Mich");
	AMateria* tmp2;
	Character* jean = new Character("Jean");
	Character* copyjean = new Character(*jean);
	tmp2 = copy->createMateria("ice");
	mich->equip(tmp2);
	tmp2 = copy->createMateria("cure");
	mich->equip(tmp2);
	tmp2 = copy->createMateria("ice");
	mich->equip(tmp2);
	tmp2 = copy->createMateria("cure");
	mich->equip(tmp2);
	tmp2 = copy->createMateria("ice");
	mich->equip(tmp2);
	tmp2 = copy->createMateria("cure");
	mich->equip(tmp2);
	mich->unequip(0);
	mich->use(0, *jean);
	mich->use(1, *jean);
	delete jean;
	mich->use(2, *copyjean);
	mich->use(3, *copyjean);
	mich->use(4, *copyjean);

	delete copyjean;
	delete mich;
	delete src2;
	return 0;
}