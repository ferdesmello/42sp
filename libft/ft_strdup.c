/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 12:48:25 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:44:07 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
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
}

/*#include <stdio.h>

int main(void)
{
    const char *src = "Hello world!";
    char *dest = ft_strdup(src);

    printf("Original: '%s'\n", src);
    printf("Cópia   : '%s'\n", dest);

    free(dest);
    return (0);
}*/