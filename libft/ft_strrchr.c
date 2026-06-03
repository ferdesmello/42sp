/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:45:13 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 16:10:35 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	char			char_c;
	char			*final_position;

	i = 0;
	char_c = (char)c;
	final_position = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == char_c)
		{
			final_position = (char *)&str[i];
		}
		i++;
	}
	if (str[i] == char_c)
		return ((char *)&str[i]);
	return (final_position);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "abcdef ABCDEF 12 abcdef ABCDEF 12";
	printf("%c, %p\n", 'a', strrchr(string, 'a'));
	printf("%c, %p\n", 'a', ft_strrchr(string, 'a'));
	printf("%c, %p\n", 'F', strrchr(string, 'F'));
	printf("%c, %p\n", 'F', ft_strrchr(string, 'F'));
	printf("%c, %p\n", '3', strrchr(string, '3'));
	printf("%c, %p\n", '3', ft_strrchr(string, '3'));
	printf("%c, %p\n", '!', strrchr(string, '!'));
	printf("%c, %p\n", '!', ft_strrchr(string, '!'));
	
	return (0);
}*/