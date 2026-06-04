/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:06:22 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/04 00:09:16 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void ft_putchar(char c)
{
	write(1, &c, 1);
}

char test(unsigned int i, char c)
{
	char new_c;

	new_c = c + i;
	ft_putchar(new_c);
	ft_putchar('\n');
	return (new_c);
}

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}*/

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	unsigned int	i;

	if (!s || !f)
		return (0);
	new_s = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_s)
		return (0);
	i = 0;
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/*int main(void)
{
	char *array;
	//char *new_array;

	array = (char[]){'a', 'a', 'a', 'a', 'a'};
	ft_strmapi(array, &test);

	return (0);
}*/