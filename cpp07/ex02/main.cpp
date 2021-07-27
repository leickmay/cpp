#include "Array.hpp"

int main()
{
	int *a = new int();
	std::cout << "try to compile int *a = new int() and display *a :" << std::endl;
	std::cout << *a <<std::endl << std::endl;
	delete a;

	std::cout << "create Array int(6) and display it : " << std::endl;
	Array<int> ar(6);
	for (unsigned int i = 0; i < ar.size(); i++)
		std::cout << ar[i] << std::endl;
	std::cout << "size : " << ar.size() << std::endl;

	std::cout << "create Array float(4) and display it : " << std::endl;
	Array<float> af(4);
	for (unsigned int i = 0; i < af.size(); i++)
		std::cout << af[i] << std::endl;
	std::cout << "size : " << ar.size() << std::endl;

	std::cout << "Try to access array[4] : " << std::endl;
	try
	{
		std::cout << af[4] <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}