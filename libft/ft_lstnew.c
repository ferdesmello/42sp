/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:16:29 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/01 16:14:32 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new_tlist;

	new_tlist = malloc(sizeof(t_list));
	if (new_tlist == 0)
		return (0);
	new_tlist->content = content;
	new_tlist->next = 0;
	return (new_tlist);
}

/*#include <stdio.h>

int	main(void)
{
	t_list *head;
	t_list *second;
	t_list *temp;
	int number;

	number = 42;
	head = ft_lstnew(&number);
	second = ft_lstnew("Hello!");
	head->next = second;
	
	printf("%d\n", *(int *)(head->content));
	printf("%s\n", (char *)(head->next->content));
	
	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	return (0);
}*/
