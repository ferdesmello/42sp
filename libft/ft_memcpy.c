/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:45 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/25 16:57:08 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*d;
	const char		*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <string.h>
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
int main (void)
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
	memcpy(dest1, src1, ft_strlen(src1) + 1);
	printf("dest1 '%s'\n", dest1);
	printf("dest2 '%s'\n", dest2);
	ft_memcpy(dest2, src1, ft_strlen(src1) + 1);
	printf("dest2 '%s'\n\n", dest2);

	printf("src2  '%s'---------\n", src2);
	printf("dest3 '%s'\n", dest3);
	memcpy(dest3, src2, ft_strlen(src2) + 3);
	printf("dest3 '%s'\n", dest3);
	printf("dest4 '%s'\n", dest4);
	ft_memcpy(dest4, src2, ft_strlen(src2) + 3);
	printf("dest4 '%s'\n\n", dest4);

	printf("src2  '%s'---------\n", src2);
	printf("dest5 '%s'\n", dest5);
	memcpy(dest5, src2, ft_strlen(src2) - 1);
	printf("dest5 '%s'\n", dest5);
	printf("dest6 '%s'\n", dest6);
	ft_memcpy(dest6, src2, ft_strlen(src2) - 1);
	printf("dest6 '%s'\n", dest6);

	return 0;
}*/