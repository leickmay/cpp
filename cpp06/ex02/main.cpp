#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base* generate(void)
{
	Base* b;

	int i = rand() % 3;
	if (i == 0)
		return b = new A;
	if (i == 1)
		return b = new B;
	if (i == 2)
		return b = new C;
	return 0;
}

void identify_from_pointer(Base* p)
{
	try
	{
		A a = dynamic_cast<A&>(*p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B b = dynamic_cast<B&>(*p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C c = dynamic_cast<C&>(*p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

void identify_from_reference(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

int main()
{
	srand(time(NULL));
	std::cout << "==New try==" << std::endl;
	Base*	p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
	std::cout << std::endl << "==New try==" << std::endl;
	Base*	p1 = generate();
	identify_from_pointer(p1);
	identify_from_reference(*p1);
	std::cout << std::endl << "==New try==" << std::endl;
	Base*	p2 = generate();
	identify_from_pointer(p2);
	identify_from_reference(*p2);
	std::cout << std::endl << "==New try==" << std::endl;
	Base*	p3 = generate();
	identify_from_pointer(p3);
	identify_from_reference(*p3);
	std::cout << std::endl << "==New try==" << std::endl;
	Base*	p4 = generate();
	identify_from_pointer(p4);
	identify_from_reference(*p4);

	return 0;
}