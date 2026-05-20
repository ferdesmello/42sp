/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:34:44 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/20 14:36:51 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		size;

	size = ft_strlen(src);
	dest = malloc((size + 1) * sizeof(char));
	if (dest != NULL)
	{
		i = 0;
		while (i <= size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	*string;
	char	*dest;

	string = "10 past midnight.";
	printf("%s\n", string);

	dest = ft_strdup(string);
	printf("%s\n", dest);

	free(dest);

	return (0);
}*/
