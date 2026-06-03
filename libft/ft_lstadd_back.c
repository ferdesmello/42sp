/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:41:03 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:43:11 by ferde-so         ###   ########.fr       */
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
}*/

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

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;
	t_list	*temp;
	t_list	*current;

	head = ft_lstnew("Hello, ");
	second = ft_lstnew("big");
	third = ft_lstnew("World!");
	ft_lstadd_back(&head, second);
	ft_lstadd_back(&second, third);
	current = head;
	while (current != 0)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	return (0);
}*/
