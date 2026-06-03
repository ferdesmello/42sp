/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:41 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:43:38 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)str1;
	c2 = (unsigned char *)str2;
	while (i < n)
	{
		if (c1[i] != c2[i])
		{
			return (c1[i] - c2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "abcdef";
	char s2[] = "abcdef";
	printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, 10));
	printf("   memcmp = %d\n", memcmp(s1, s2, 10));

	char s3[] = "abcdeayy";
	char s4[] = "abcdefyy";
	printf("ft_memcmp = %d\n", ft_memcmp(s3, s4, 10));
	printf("   memcmp = %d\n", memcmp(s3, s4, 10));

	char s5[] = "abcdefyy";
	char s6[] = "abcdeayy";
	printf("ft_memcmp = %d\n", ft_memcmp(s5, s6, 10));
	printf("   memcmp = %d\n", memcmp(s5, s6, 10));

	char s7[] = "abcde";
	char s8[] = "abcdef";
	printf("ft_memcmp = %d\n", ft_memcmp(s7, s8, 10));
	printf("   memcmp = %d\n", memcmp(s7, s8, 10));

	char s9[] = "abcdef";
	char s10[] = "abcde";
	printf("ft_memcmp = %d\n", ft_memcmp(s9, s10, 10));
	printf("   memcmp = %d\n", memcmp(s9, s10, 10));

	char s11[] = "ab00cde ";
	char s12[] = "ab00cdeç";
	printf("ft_memcmp = %d\n", ft_memcmp(s11, s12, 10));
	printf("   memcmp = %d\n", memcmp(s11, s12, 10));

	char s13[] = "0201";
	char s14[] = "0101";
	printf("ft_memcmp = %d\n", ft_memcmp(s13, s14, 10));
	printf("   memcmp = %d\n", memcmp(s13, s14, 10));

	char s15[] = "abc";
	char s16[] = "";
	printf("ft_memcmp = %d\n", ft_memcmp(s15, s16, 10));
	printf("   memcmp = %d\n", memcmp(s15, s16, 10));

	char s17[] = "";
	char s18[] = "abc";
	printf("ft_memcmp = %d\n", ft_memcmp(s17, s18, 10));
	printf("   memcmp = %d\n", memcmp(s17, s18, 10));

	char s19[] = "";
	char s20[] = "";
	printf("ft_memcmp = %d\n", ft_memcmp(s19, s20, 10));
	printf("   memcmp = %d\n", memcmp(s19, s20, 10));
	return (0);
}*/