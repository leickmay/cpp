#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		T 				*_array;
		unsigned int	_n;

	public:
		Array():_array(NULL), _n(0) {}
		Array(unsigned int n) 
		{
			_array = new T[n]();
			_n = n;
		}
		Array(Array const& other)
		{
			_array = new T[other.size()];
			_n = other.size();
			for (unsigned int i = 0; i < _n; i++)
				_array[i] = other._array[i];
		}
		Array	&operator=(Array const& other)
		{
			if (this != &other)
			{
				_array = new T[other.size()];
				_n = other.size();
				for (unsigned int i = 0; i < _n; i++)
					_array[i] = other._array[i];
			}
			return *this;
		}
		~Array()
		{
			if (_n > 0)
			delete[] _array;
		}

		T		&operator[](unsigned int i) const
		{
			if (i >= _n  || !_array || i < 0)
				throw std::exception();
			return _array[i];
		}
		unsigned int	size() const {return _n;}
};



#endif