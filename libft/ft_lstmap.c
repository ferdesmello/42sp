#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*t_list	*ft_lstnew(void *content)
{
	t_list	*new_tlist;

	new_tlist = malloc(sizeof(t_list));
	if (new_tlist == 0)
		return (0);
	new_tlist->content = content;
	new_tlist->next = 0;
	return (new_tlist);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != 0)
	{
		last = last->next;
	}
	last->next = new;
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next_node;

	if (lst == 0 || *lst == 0 || del == 0)
		return ;
	current = *lst;
	while (current != 0)
	{
		next_node = current->next;
		del(current->content);
		free(current);
		current = next_node;
	}
	*lst = 0;
}

void	*test(void *n)
{
	int	*new_n;

	new_n = malloc(sizeof(int));
	if (!new_n)
		return (0);
	*new_n = (*(int *)n) * (*(int *)n);
	return (new_n);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_head;
	void	*content;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	new_head = 0;
	while (lst != 0)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (new_node == 0)
		{
			del(content);
			ft_lstclear(&new_head, del);
			return (0);
		}
		ft_lstadd_back(&new_head, new_node);
		lst = lst->next;
	}
	return (new_head);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;
	t_list	*temp;
	t_list	*current;
	t_list	*new_head;
	int values[3] = {1, 2, 3};

	head = ft_lstnew(&values[0]);
	second = ft_lstnew(&values[1]);
	third = ft_lstnew(&values[2]);

	head->next = second;
	second->next = third;

	new_head = ft_lstmap(head, &test, &free);

	current = head;
	while (current != 0)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	current = new_head;
	while (current != 0)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
	while (new_head != 0)
	{
		temp = new_head;
		new_head = new_head->next;
		free(temp);
	}

	return (0);
}*/
