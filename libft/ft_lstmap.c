/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:17:00 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/09 03:04:29 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
