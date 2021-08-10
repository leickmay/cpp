#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define RESET "\e[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		~MutantStack() {};
		typedef typename std::deque<T>::iterator iterator;
		iterator	begin() {return std::begin(std::stack<T>::c);}
		iterator	end() {return std::end(std::stack<T>::c);}
};

#endif