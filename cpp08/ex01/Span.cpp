#include "Span.hpp"

Span::Span(unsigned int N):_N(N)
{
	_tab = std::vector<int>(_N);
	_it = _tab.begin();
}

Span::Span(Span const& other):_N(other._N)
{
	for (std::vector<const int>::iterator it = other._tab.begin(); it != other._tab.end(); it++)
	{
		_tab.push_back(*it);
	}
}

Span&	Span::operator=(Span const& other)
{
	if (this != &other)
	{
		_N = other._N;
		for (std::vector<const int>::iterator it = other._tab.begin(); it != other._tab.end(); it++)
		{
			_tab.push_back(*it);
		}
	}
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int nb)
{
	if (_it == _tab.end())
		throw SpanFullException();
	*_it = nb;
	_it++;
}

int		Span::shortestSpan() const
{
	if (_it == _tab.begin() || _it == _tab.begin() + 1)
		throw NoSpanException();
	std::vector<int> temp;
	for (std::vector<const int>::iterator it = _tab.begin(); it != _tab.end(); it++)
	{
		temp.push_back(*it);
	}
	std::sort(temp.begin(), temp.end());
	std::vector<int>::iterator it = temp.begin();
	std::vector<int>::iterator it1 = temp.begin() + 1;
	int result = *it1 - *it;
	while (it1 + 1 != temp.end())
	{
		it++;
		it1++;
		result = std::min(result, *it1 - *it);
	}
	return result;
}

int		Span::longestSpan() const
{
	if (_it == _tab.begin() || _it == _tab.begin() + 1)
		throw NoSpanException();
	std::vector<int> temp;
	for (std::vector<const int>::iterator it = _tab.begin(); it != _tab.end(); it++)
	{
		temp.push_back(*it);
	}
	std::sort(temp.begin(), temp.end());
	std::vector<int>::iterator end = temp.end() - 1;
	std::vector<int>::iterator begin = temp.begin();
	return *end - *begin;
}

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	_it = start;
	while (_it != end)
	{
		*_it++ = rand() % _N;
	}
}

std::vector<int>::iterator	Span::begin()
{
	std::vector<int>::iterator it = _tab.begin();
	return _tab.begin();
}

std::vector<int>::iterator	Span::end()
{
	return _tab.end();
}
