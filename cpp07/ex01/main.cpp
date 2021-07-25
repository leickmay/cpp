#include "iter.hpp"

#define BLUE "\e[1;34m"
#define YELLOW "\e[1;33m"
#define RESET "\e[0m"

int main()
{
	std::cout << BLUE << "==Data initialization :==" << RESET << std::endl;
	std::cout << "array int a[5] : ";
	int	a[5] = {1, 2, 3, 4, 5};
	for(int i = 0; i < 4; i++)
		std::cout << a[i] << ", ";
	std::cout << a[4] << std::endl;

	std::cout << "array char c[5] : ";
	char	c[5] = {'!', '\"', '#', '$', '%'};
	for(int i = 0; i < 4; i++)
		std::cout << c[i] << ", ";
	std::cout << c[4] << std::endl;

	std::cout << "array float f[5] : ";
	float f[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	for(int i = 0; i < 4; i++)
		std::cout << f[i] << ", ";
	std::cout << f[4] << std::endl;


	std::cout << std::endl << BLUE << "==Iter increment function :==" << RESET << std::endl;
	iter(a, 5, &increment);
	iter(c, 5, &increment);
	iter(f, 5, &increment);

	std::cout << "array int a[5] : ";
	for(int i = 0; i < 4; i++)
		std::cout << a[i] << ", ";
	std::cout << a[4] << std::endl;

	std::cout << "array char c[5] : ";
	for(int i = 0; i < 4; i++)
		std::cout << c[i] << ", ";
	std::cout << c[4] << std::endl;

	std::cout << "array float f[5] : ";
	for(int i = 0; i < 4; i++)
		std::cout << f[i] << ", ";
	std::cout << f[4] << std::endl;

	std::cout << std::endl << BLUE << "==Iter doubleValue function :==" << RESET << std::endl;
	iter(a, 5, &doubleValue);
	iter(c, 5, &doubleValue);
	iter(f, 5, &doubleValue);

	std::cout << "array int a[5] : ";
	for(int i = 0; i < 4; i++)
		std::cout << a[i] << ", ";
	std::cout << a[4] << std::endl;

	std::cout << "array char c[5] : ";
	for(int i = 0; i < 4; i++)
		std::cout << c[i] << ", ";
	std::cout << c[4] << std::endl;

	std::cout << "array float f[5] : ";
	for(int i = 0; i < 4; i++)
		std::cout << f[i] << ", ";
	std::cout << f[4] << std::endl;

	return 0;
}