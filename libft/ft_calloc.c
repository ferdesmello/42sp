/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 12:48:14 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 01:07:44 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	i;

	if (num == 0 || size == 0)
		return (malloc(1));
	ptr = malloc(num * size);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < num * size)
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
