/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:45:08 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:44:35 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n)
	{
		c1 = str1[i];
		c2 = str2[i];
		if (c1 != c2 || c1 == '\0')
			return (c1 - c2);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int n = 5;
	char s1[] = "abcdef";
	char s2[] = "abcdef";
	printf("ft_strncmp = %d\n", ft_strncmp(s1, s2, n));
	printf("   strncmp = %d\n", strncmp(s1, s2, n));

	char s3[] = "abcdeayy";
	char s4[] = "abcdefyy";
	printf("ft_strncmp = %d\n", ft_strncmp(s3, s4, n));
	printf("   strncmp = %d\n", strncmp(s3, s4, n));

	char s5[] = "abcdefyy";
	char s6[] = "abcdeayy";
	printf("ft_strncmp = %d\n", ft_strncmp(s5, s6, n));
	printf("   strncmp = %d\n", strncmp(s5, s6, n));

	char s7[] = "abcde";
	char s8[] = "abcdef";
	printf("ft_strncmp = %d\n", ft_strncmp(s7, s8, n));
	printf("   strncmp = %d\n", strncmp(s7, s8, n));

	char s9[] = "abcdef";
	char s10[] = "abcde";
	printf("ft_strncmp = %d\n", ft_strncmp(s9, s10, n));
	printf("   strncmp = %d\n", strncmp(s9, s10, n));

	char s11[] = "ab00cde ";
	char s12[] = "ab00cdeç";
	printf("ft_strncmp = %d\n", ft_strncmp(s11, s12, n));
	printf("   strncmp = %d\n", strncmp(s11, s12, n));

	char s13[] = "0201";
	char s14[] = "0101";
	printf("ft_strncmp = %d\n", ft_strncmp(s13, s14, n));
	printf("   strncmp = %d\n", strncmp(s13, s14, n));

	char s15[] = "abc";
	char s16[] = "";
	printf("ft_strncmp = %d\n", ft_strncmp(s15, s16, n));
	printf("   strncmp = %d\n", strncmp(s15, s16, n));

	char s17[] = "";
	char s18[] = "abc";
	printf("ft_strncmp = %d\n", ft_strncmp(s17, s18, n));
	printf("   strncmp = %d\n", strncmp(s17, s18, n));

	char s19[] = "";
	char s20[] = "";
	printf("ft_strncmp = %d\n", ft_strncmp(s19, s20, n));
	printf("   strncmp = %d\n", strncmp(s19, s20, n));
	return (0);
}*/