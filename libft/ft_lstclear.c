/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:16:34 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:43:16 by ferde-so         ###   ########.fr       */
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

void	*ft_strdup(const char *src)
{
	void	*dest;
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		((char *)dest)[i] = src[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}*/

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

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;
	t_list	*temp;
	t_list	*current;

	head = ft_lstnew(ft_strdup("Hello, "));
	second = ft_lstnew(ft_strdup("big"));
	third = ft_lstnew(ft_strdup("World!"));
	head->next = second;
	second->next = third;

	//head->next = 0;
	ft_lstclear(&second, &free);
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
		free(temp->content);
		free(temp);
	}
	return (0);
}*/
