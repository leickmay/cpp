#include "Span.hpp"

int main()
{
	srand(time(NULL));
	Span s(4);
	Span s2(100000);
	Span s3(2);
	s.addNumber(10);
	s.addNumber(2);
	s.addNumber(30);
	s.addNumber(28);
	std::cout << BLUE << "== addNumber :==" << RESET << std::endl;
	std::cout << "shortest : " << s.shortestSpan() << std::endl;
	std::cout << "longest : " << s.longestSpan() << std::endl;
	s2.addRange(s2.begin(), s2.end());
	std::cout << BLUE << "== addRange :==" << RESET << std::endl;
	std::cout << "shortest : " << s2.shortestSpan() << std::endl;
	std::cout << "longest : " << s2.longestSpan() << std::endl;
	try
	{
		std::cout << BLUE << "== Try to add too much numbers :==" << RESET << std::endl;
		s.addNumber(27);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	s3.addNumber(42);
	try
	{
		std::cout << BLUE << "== Try span in a too short range :==" << RESET << std::endl;
		std::cout << "shortest : " << s3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "longest : " << s3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	s3.addNumber(21);
	std::cout << BLUE << "adding one number..." << RESET << std::endl;
	try
	{
		std::cout << "shortest : " << s3.shortestSpan() << std::endl;
		std::cout << "longest : " << s3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}