#include <iostream>

#define BLUE "\e[1;34m"
#define RESET "\e[0m"

struct Data
{
	std::string	name;
	int			age;
	float		height;
};

uintptr_t	serialize(Data* ptr)
{
	uintptr_t addr = reinterpret_cast<uintptr_t>(ptr);
	return addr;
}

Data*	deserialize(uintptr_t raw)
{
	Data* ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}

void	displayData(Data d)
{
	std::cout << d.name << std::endl << d.age << std::endl << d.height << std::endl;
}

int main()
{
	Data	michel;
	std::cout << BLUE << "==Initialization of a Data struct :==" << RESET << std::endl;
	michel.age = 42;
	michel.name = "Michel";
	michel.height = 178.6f;
	displayData(michel);
	std::cout << std::endl << BLUE << "==Serialization of the pointer :==" << RESET << std::endl;
	uintptr_t addr = serialize(&michel);
	std::cout << addr << std::endl;
	std::cout << std::endl << BLUE << "==Creation of Data* ptr with deserialize :==" << RESET << std::endl;
	Data* ptr = deserialize(addr);
	displayData(*ptr);
}