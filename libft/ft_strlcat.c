/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:59 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 01:59:49 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (src[i] && (i + dest_len + 1) < size)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (src_len + dest_len);
}

/*#include <stdio.h>
#include <bsd/string.h>
// add the flag -lbsd  in the compilation

int main(void)
{
    char dest1[100] = "Hello, ";
    char src1[] = "world!";
    printf("dest: %s\n", dest1);
    printf("src : %s\n", src1);
    printf("ft_strlcat: %u, '%s'\n", ft_strlcat(dest1, src1, 100), dest1);
    char dest2[100] = "Hello, ";
    char src2[] = "world!";
    printf("   strlcat: %zu, '%s'\n", strlcat(dest2, src2, 100), dest2);

	char dest3[100] = "Hello, ";
    char src3[] = "world!";
    printf("ft_strlcat: %u, '%s'\n", ft_strlcat(dest3, src3, 10), dest3);
    char dest4[100] = "Hello, ";
    char src4[] = "world!";
    printf("   strlcat: %zu, '%s'\n", strlcat(dest4, src4, 10), dest4);

	char dest5[100] = "Hello, ";
    char src5[] = "world!";
    printf("ft_strlcat: %u, '%s'\n", ft_strlcat(dest5, src5, 1), dest5);
    char dest6[100] = "Hello, ";
    char src6[] = "world!";
    printf("   strlcat: %zu, '%s'\n", strlcat(dest6, src6, 1), dest6);

	char dest7[100] = "Hello, ";
    char src7[] = "world!";
    printf("ft_strlcat: %u, '%s'\n", ft_strlcat(dest7, src7, 0), dest7);
    char dest8[100] = "Hello, ";
    char src8[] = "world!";
    printf("   strlcat: %zu, '%s'\n", strlcat(dest8, src8, 0), dest8);

	char dest9[100] = "A";
    char src9[] = "";
    printf("ft_strlcat: %u, '%s'\n", ft_strlcat(dest9, src9, 0), dest9);
    char dest10[100] = "A";
    char src10[] = "";
    printf("   strlcat: %zu, '%s'\n", strlcat(dest10, src10, 0), dest10);
	
    return (0);
}*/