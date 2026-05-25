/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:53 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/25 16:49:10 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	*ft_memset(void *dest, int c, unsigned int n)
{
	unsigned char	value;
	unsigned int	i;

	value = c;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = value;
		i++;
	}
	return (dest);
}

/*#include <string.h>
#include <stdio.h>

// ‘size_t’ is defined in header ‘<stddef.h>’
int main (void)
{
	char	string1[] = "abcdefghijklmnopqrstuvwxyz";
	char	string2[] = "abcdefghijklmnopqrstuvwxyz";
	char	string3[] = "abcdefghijklmnopqrstuvwxyz";
	char	string4[] = "abcdefghijklmnopqrstuvwxyz";

	printf("'%s'\n", string1);
	memset(string1, 0, ft_strlen(string1)*sizeof(char));
	printf("'%s'\n", string1);
	printf("'%s'\n", string2);
	ft_memset(string2, 0, ft_strlen(string2)*sizeof(char));
	printf("'%s'\n\n", string2);
	
	printf("'%s'\n", string3);
	memset(string3 + 5, 'a', ft_strlen(string3)*sizeof(char));
	printf("'%s'\n", string3);
	printf("'%s'\n", string4);
	ft_memset(string4 + 5, 'a', ft_strlen(string4)*sizeof(char));
	printf("'%s'\n\n", string4);
	
	return 0;
}*/