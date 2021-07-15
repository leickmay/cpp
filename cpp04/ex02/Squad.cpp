#include "Squad.hpp"

Squad::Squad():_list(NULL), _count(0)
{
}

Squad::~Squad()
{
	t_list	*tmp = _list;

	for (int i = 0; i < _count; i++)
	{
		delete _list->data;
		tmp = _list->next;
		delete _list;
		_list = tmp;
	}
}

Squad::Squad(Squad const& other)
{
	std::cout << "coucou" << std::endl;
	t_list	*nlist = NULL;
	t_list	*tmp = NULL;
	t_list	*olist = other._list;

	std::cout << "coucou" << std::endl;
	if (olist)
	{
		nlist = new t_list;
		nlist->data = _list->data->clone();
		olist = other._list->next;
	}
	tmp = nlist;
	while (olist)
	{
		tmp->next = new t_list;
		tmp->next->data = olist->data->clone();
		tmp = tmp->next;
		olist = olist->next;
	}
}

Squad&	Squad::operator=(Squad const& other)
{
	if (this != &other)
	{
		
	}
	return *this;
}

int	Squad::getCount() const
{
	return _count;
}

ISpaceMarine*	Squad::getUnit(int u) const
{
	t_list	*tmp = _list;
	for (int i = 0; i < u; i++)
	{
		tmp = tmp->next;
	}
	return tmp->data;
}

int	Squad::push(ISpaceMarine* s)
{
	t_list	*tmp = _list;
	t_list	*newMarine;

	if (!_list)
	{
		_list = new t_list;
		_list->data = s;
		_list->next = NULL;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		newMarine = new t_list;
		newMarine->data = s;
		newMarine->next = NULL;
		tmp->next = newMarine;
	}
	_count++;
	return _count;
}
