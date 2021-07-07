#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	std::cout << "Main of the subject : " << std::endl << std::endl;
	Fixed	a;
	Fixed	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << std::endl << "Complementary tests : " << std::endl << std::endl;

	Fixed	c(Fixed(5.05f) / Fixed(2));
	Fixed	d(Fixed(5.05f) - Fixed(2));
	Fixed	e(Fixed(5.05f) + Fixed(2));

	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl << "5.05 / 2 : " << c << std::endl;
	std::cout << "5.05 - 2 : " << d << std::endl;
	std::cout << "5.05 + 2 : " << e << std::endl;

	std::cout << "min fct : " << Fixed::min(c, e) << std::endl;

	std::cout << std::endl << "Comparisons : " << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "bool test : " << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a <= b) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl;

	Fixed f(a << b);
	Fixed g(a >> b);
	std::cout << std::endl << "f : " << f << std::endl;
	std::cout << "g : " << g << std::endl;

	return 0;
}