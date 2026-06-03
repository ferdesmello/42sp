/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:45:01 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:44:25 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			if (src[i] == '\0')
				return (i);
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

/*#include <bsd/string.h>
// add the flag -lbsd  in the compilation
#include <stdio.h>

unsigned int ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// ‘size_t’ is defined in header ‘<stddef.h>’
int main(void)
{
	char	src1[] = "abcdefghijklmnopqrstuvwxyz";
	char	src2[] = "aaaaaaaaaa";
	char	dest1[] = "0000000000000000000000000000000";
	char	dest2[] = "0000000000000000000000000000000";
	char	dest3[20] = "11111";
	char	dest4[20] = "11111";
	char	dest5[] = "gggggggggggggggggggggggggggggggggggggggg";
	char	dest6[] = "gggggggggggggggggggggggggggggggggggggggg";

	printf("src1  '%s'---------\n", src1);
	printf("dest1 '%s'\n", dest1);
	printf("%zu\n", strlcpy(dest1, src1, ft_strlen(src1) + 1));
	printf("dest1 '%s'\n", dest1);
	printf("dest2 '%s'\n", dest2);
	printf("%d\n", ft_strlcpy(dest2, src1, ft_strlen(src1) + 1));
	printf("dest2 '%s'\n\n", dest2);

	printf("src2  '%s'---------\n", src2);
	printf("dest3 '%s'\n", dest3);
	printf("%zu\n", strlcpy(dest3, src2, ft_strlen(src2) + 3));
	printf("dest3 '%s'\n", dest3);
	printf("dest4 '%s'\n", dest4);
	printf("%d\n", ft_strlcpy(dest4, src2, ft_strlen(src2) + 3));
	printf("dest4 '%s'\n\n", dest4);

	printf("src2  '%s'---------\n", src2);
	printf("dest5 '%s'\n", dest5);
	printf("%zu\n", strlcpy(dest5, src2, ft_strlen(src2) - 1));
	printf("dest5 '%s'\n", dest5);
	printf("dest6 '%s'\n", dest6);
	printf("%d\n", ft_strlcpy(dest6, src2, ft_strlen(src2) - 1));
	printf("dest6 '%s'\n", dest6);

	return (0);
}*/