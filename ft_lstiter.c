#include "libft.h"

void	fprint_node(void *content)
{
	(void)content;
	write(1, "Node, ", 6);
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
