#include <iostream>
#include "whatever.hpp"

#define BLUE "\e[1;34m"
#define RESET "\e[0m"

int main()
{
	int a = 1;
	int b = 2;
	char c = 'c';
	char d = 'd';
	float e = 42.42f;
	float f = 0.21f;

	std::cout << BLUE << "==Data initialization : ==" << RESET << std::endl;
	std::cout << "int a : " << a << std::endl;
	std::cout << "int b : " << b << std::endl;
	std::cout << "char c : " << c << std::endl;
	std::cout << "char d : " << d << std::endl;
	std::cout << "float e : " << e << std::endl;
	std::cout << "float f : " << f << std::endl;

	std::cout << std::endl << BLUE << "==Swap function : ==" << RESET << std::endl;
	swap(a, b);
	swap(c, d);
	swap(e, f);
	std::cout << "int a : " << a << std::endl;
	std::cout << "int b : " << b << std::endl;
	std::cout << "char c : " << c << std::endl;
	std::cout << "char d : " << d << std::endl;
	std::cout << "float e : " << e << std::endl;
	std::cout << "float f : " << f << std::endl;

	std::cout << std::endl << BLUE << "==Min function : ==" << RESET << std::endl;
	std::cout << "Min between " << a << " and " << b << " : " << min(a, b) << std::endl;
	std::cout << "Min between " << c << " and " << d << " : " << min(c, d) << std::endl;
	std::cout << "Min between " << e << " and " << f << " : " << min(e, f) << std::endl;

	std::cout << std::endl << BLUE << "==Max function : ==" << RESET << std::endl;
	std::cout << "Max between " << a << " and " << b << " : " << max(a, b) << std::endl;
	std::cout << "Max between " << c << " and " << d << " : " << max(c, d) << std::endl;
	std::cout << "Max between " << e << " and " << f << " : " << max(e, f) << std::endl;
}