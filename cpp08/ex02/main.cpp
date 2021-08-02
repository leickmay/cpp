#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << BLUE << "=====" << RESET << std::endl;
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.top() << std::endl;
	std::cout << BLUE << "=====" << RESET << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << BLUE << "==Use iterators to read the content of mstack==" << RESET << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	std::cout << BLUE << "==Stack copy of mstack==" << RESET << std::endl;
	std::cout << s.top() << std::endl;
	std::cout << "size of copy : " << s.size() << std::endl;
	std::cout << "size of mstack : " << mstack.size() << std::endl;

	MutantStack<std::string> strmstack;
	std::cout << BLUE << "==Mstack of strings==" << RESET << std::endl;
	strmstack.push("Hello");
	strmstack.push("it also work with strings");
	strmstack.push("Incredible");
	
	MutantStack<std::string>::iterator it2 = strmstack.begin();
	MutantStack<std::string>::iterator ite2 = strmstack.end();

	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	MutantStack<std::string> copy(strmstack);
	std::cout << BLUE << "==Mstack of strings with copy contructor==" << RESET << std::endl;

	MutantStack<std::string>::iterator it3 = copy.begin();
	MutantStack<std::string>::iterator ite3 = copy.end();

	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}

	MutantStack<std::string> assign;
	std::cout << BLUE << "==Mstack of strings with assignation operator==" << RESET << std::endl;

	assign.push("Random string");
	std::cout << "before assignation : " << assign.top() << std::endl << "after : " << std::endl;
	assign = strmstack;
	MutantStack<std::string>::iterator it4 = assign.begin();
	MutantStack<std::string>::iterator ite4 = assign.end();

	while (it4 != ite4)
	{
		std::cout << *it4 << std::endl;
		++it4;
	}
	return 0;
}