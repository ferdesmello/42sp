/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:30 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/25 16:51:56 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*position;

	i = 0;
	position = (unsigned char *)str;
	while (i < n)
	{
		if (*position == (unsigned char)c)
		{
			return ((void *)position);
		}
		position++;
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

// ‘size_t’ is defined in header ‘<stddef.h>’
int	main(void)
{
	char	string[] = "abcdef ABCDEF 12 abcdef ABCDEF 12";
	printf("%c, %p\n", 'a', memchr(string, 'a', 50));
	printf("%c, %p\n", 'a', ft_memchr(string, 'a', 50));
	printf("%c, %p\n", 'F', memchr(string, 'F', 50));
	printf("%c, %p\n", 'F', ft_memchr(string, 'F', 50));
	printf("%c, %p\n", '3', memchr(string, '3', 50));
	printf("%c, %p\n", '3', ft_memchr(string, '3', 50));
	printf("%c, %p\n", '!', memchr(string, '!', 50));
	printf("%c, %p\n", '!', ft_memchr(string, '!', 50));
	
	return (0);
}*/