/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:56 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 01:36:16 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "abcdef ABCDEF 12 abcdef ABCDEF 12";
	printf("%c, %p\n", 'a', strchr(string, 'a'));
	printf("%c, %p\n", 'a', ft_strchr(string, 'a'));
	printf("%c, %p\n", 'F', strchr(string, 'F'));
	printf("%c, %p\n", 'F', ft_strchr(string, 'F'));
	printf("%c, %p\n", '3', strchr(string, '3'));
	printf("%c, %p\n", '3', ft_strchr(string, '3'));
	printf("%c, %p\n", '!', strchr(string, '!'));
	printf("%c, %p\n", '!', ft_strchr(string, '!'));
	
	return (0);
}*/