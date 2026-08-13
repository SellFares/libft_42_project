#include "libft.h"

void	*f_check(void *content)
{
	if (content == NULL)
		return (NULL);
	return (content);
}

void	del_content(void *content)
{
	free(content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_head;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_head = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new_head, new_node);
		lst = lst->next;
	}
	return (new_head);
}
