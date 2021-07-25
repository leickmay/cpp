#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *array, size_t length, void f(T &elem))
{
	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

template<typename T>
void	increment(T &i)
{
	i++;
}

template<typename T>
void	doubleValue(T &i)
{
	i *= 2;
}


#endif