#ifndef LIST_HPP
# define LIST_HPP

# include "AMateria.hpp"

typedef struct	s_list
{
	AMateria	*content;
	s_list		*next;
}				t_list;

t_list	*ft_lstNew(AMateria *content);
void	ft_lstAddBack(t_list **alst, t_list *elem);
void	ft_lstClear(t_list *lst);

#endif