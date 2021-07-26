#include "list.hpp"

t_list	*ft_lstNew(AMateria *content)
{
	t_list *nlst = new t_list;
	nlst->content = content;
	nlst->next = NULL;
	return nlst;
}

void	ft_lstAddBack(t_list **alst, t_list *nlst)
{
	t_list	*current;

	if (*alst == 0)
		*alst = nlst;
	else
	{
		current = *alst;
		while (current->next)
			current = current->next;
		current->next = nlst;
	}
}

void	ft_lstClear(t_list *lst)
{
	t_list	*tmp;
	while (lst)
	{
		tmp = lst->next;
		delete lst->content;
		lst->next = NULL;
		delete lst;
		lst = tmp;
	}
}