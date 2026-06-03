/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:06:06 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:44:20 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void test(unsigned int i, char *c)
{
	char new_c;

	new_c = *c + i;
	ft_putchar(new_c);
	ft_putchar('\n');
}

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}*/

//#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int main(void)
{
	char *array;
	//char *new_array;

	array = (char[]){'a', 'a', 'a', 'a', 'a'};
	ft_striteri(array, &test);

	return (0);
}*/