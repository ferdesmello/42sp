/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 12:48:14 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/04 23:46:49 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	total_size;

	total_size = nmemb * size;
	if (!nmemb || !size)
		return (malloc(1));
	if (nmemb && size != total_size / nmemb)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>

int main(void)
{
    int *ptr;
    int nmemb = 5;

    ptr = ft_calloc(nmemb, sizeof(int));
    free(ptr);
    return (0);
}*/
