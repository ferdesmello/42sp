/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:16:47 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/04 00:11:25 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;*/

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

void	test(void *n)
{
	int new_n;

	new_n = (*(int *)n) * (*(int *)n);
	*(int *)n = new_n;
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == 0 || f == 0)
		return ;
	while (lst != 0)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;
	t_list	*temp;
	t_list	*current;
	int values[3] = {1, 2, 3};

	head = ft_lstnew(&values[0]);
	second = ft_lstnew(&values[1]);
	third = ft_lstnew(&values[2]);
	head->next = second;
	second->next = third;

	ft_lstiter(head, &test);
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
		//free(temp->content);
		free(temp);
	}
	return (0);
}*/
