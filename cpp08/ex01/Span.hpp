#ifndef SPAN_HPP
# define SPAN_HPP

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define RESET "\e[0m"

# include <algorithm>
# include <iostream>
# include <vector>

class Span
{
	private : 
		unsigned int _N;
		std::vector<int> _tab;
		std::vector<int>::iterator _it;
		Span();

	public:
		Span(unsigned int N);
		Span(Span const& other);
		Span	&operator=(Span const& other);
		~Span();

		void			addNumber(int nb);
		void			addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int				shortestSpan() const;
		int				longestSpan() const;
		std::vector<int>::iterator	begin();
		std::vector<int>::iterator	end();

		class SpanFullException : public std::exception
		{
			const char* what() const throw()
			{
				return "\e[0;31mError: span is full !\e[0m";
			}
		};
		class NoSpanException : public std::exception
		{
			const char* what() const throw()
			{
				return "\e[0;31mError: no span to find !\e[0m";
			}
		};
};

#endif