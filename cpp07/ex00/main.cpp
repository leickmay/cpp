#include <iostream>
#include "whatever.hpp"

#define BLUE "\e[1;34m"
#define YELLOW "\e[1;33m"
#define RESET "\e[0m"

int main()
{
	std::cout << YELLOW << "=====Subject tests=====" << RESET << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl << YELLOW << "=====Complementary tests=====" << RESET << std::endl;
	int _a = 1;
	int _b = 2;
	char _c = 'c';
	char _d = 'd';
	float _e = 42.42f;
	float _f = 0.21f;

	std::cout << BLUE << "==Data initialization :==" << RESET << std::endl;
	std::cout << "int a : " << _a << std::endl;
	std::cout << "int b : " << _b << std::endl;
	std::cout << "char c : " << _c << std::endl;
	std::cout << "char d : " << _d << std::endl;
	std::cout << "float e : " << _e << std::endl;
	std::cout << "float f : " << _f << std::endl;

	std::cout << std::endl << BLUE << "==Swap function :==" << RESET << std::endl;
	::swap(_a, _b);
	::swap(_c, _d);
	::swap(_e, _f);
	std::cout << "int a : " << _a << std::endl;
	std::cout << "int b : " << _b << std::endl;
	std::cout << "char c : " << _c << std::endl;
	std::cout << "char d : " << _d << std::endl;
	std::cout << "float e : " << _e << std::endl;
	std::cout << "float f : " << _f << std::endl;

	std::cout << std::endl << BLUE << "==Min function :==" << RESET << std::endl;
	std::cout << "Min between " << _a << " and " << _b << " : " << ::min(_a, _b) << std::endl;
	std::cout << "Min between " << _c << " and " << _d << " : " << ::min(_c, _d) << std::endl;
	std::cout << "Min between " << _e << " and " << _f << " : " << ::min(_e, _f) << std::endl;

	std::cout << std::endl << BLUE << "==Max function :==" << RESET << std::endl;
	std::cout << "Max between " << _a << " and " << _b << " : " << ::max(_a, _b) << std::endl;
	std::cout << "Max between " << _c << " and " << _d << " : " << ::max(_c, _d) << std::endl;
	std::cout << "Max between " << _e << " and " << _f << " : " << ::max(_e, _f) << std::endl;
}