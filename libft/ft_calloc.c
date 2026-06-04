/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 12:48:14 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/04 00:14:04 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	i;

	if (n == 0 || size == 0)
		return (malloc(1));
	if (n != 0 && size > sizeof(size_t) / n)
		return (NULL);
	ptr = malloc(n * size);
	if (ptr == 0)
		return (NULL);
	i = 0;
	while (i < n * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>

int main(void)
{
    int *ptr;
    int n = 5;

    ptr = ft_calloc(n, sizeof(int));
    free(ptr);
    return (0);
}*/
