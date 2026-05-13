/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:11:47 by ferde-so          #+#    #+#             */
/*   Updated: 2026/03/17 11:57:30 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "abcdef";
	char s2[] = "abcdef";
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s2));
	printf("   strcmp = %d\n", strcmp(s1, s2));

	char s3[] = "abcdeayy";
	char s4[] = "abcdefyy";
	printf("ft_strcmp = %d\n", ft_strcmp(s3, s4));
	printf("   strcmp = %d\n", strcmp(s3, s4));

	char s5[] = "abcdefyy";
	char s6[] = "abcdeayy";
	printf("ft_strcmp = %d\n", ft_strcmp(s5, s6));
	printf("   strcmp = %d\n", strcmp(s5, s6));

	char s7[] = "abcde";
	char s8[] = "abcdef";
	printf("ft_strcmp = %d\n", ft_strcmp(s7, s8));
	printf("   strcmp = %d\n", strcmp(s7, s8));

	char s9[] = "abcdef";
	char s10[] = "abcde";
	printf("ft_strcmp = %d\n", ft_strcmp(s9, s10));
	printf("   strcmp = %d\n", strcmp(s9, s10));

	char s11[] = "ab00cde ";
	char s12[] = "ab00cdeç";
	printf("ft_strcmp = %d\n", ft_strcmp(s11, s12));
	printf("   strcmp = %d\n", strcmp(s11, s12));

	char s13[] = "0201";
	char s14[] = "0101";
	printf("ft_strcmp = %d\n", ft_strcmp(s13, s14));
	printf("   strcmp = %d\n", strcmp(s13, s14));

	char s15[] = "abc";
	char s16[] = "";
	printf("ft_strcmp = %d\n", ft_strcmp(s15, s16));
	printf("   strcmp = %d\n", strcmp(s15, s16));

	char s17[] = "";
	char s18[] = "abc";
	printf("ft_strcmp = %d\n", ft_strcmp(s17, s18));
	printf("   strcmp = %d\n", strcmp(s17, s18));

	char s19[] = "";
	char s20[] = "";
	printf("ft_strcmp = %d\n", ft_strcmp(s19, s20));
	printf("   strcmp = %d\n", strcmp(s19, s20));
	return (0);
}*/