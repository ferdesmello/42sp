/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:43:58 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 15:44:26 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
	
#include <string.h>
#include <stdio.h>

// ‘size_t’ is defined in header ‘<stddef.h>’
int main(void)
{
	char	string1[] = "abcdefghijklmnopqrstuvwxyz";
	char	string2[] = "abcdefghijklmnopqrstuvwxyz";
	char	string3[] = "abcdefghijklmnopqrstuvwxyz";
	char	string4[] = "abcdefghijklmnopqrstuvwxyz";

	printf("'%s'\n", string1);
	bzero(string1, ft_strlen(string1)*sizeof(char));
	printf("'%s'\n", string1);
	printf("'%s'\n", string2);
	ft_bzero(string2, ft_strlen(string2)*sizeof(char));
	printf("'%s'\n\n", string2);
	
	printf("'%s'\n", string3);
	bzero(string3 + 5, ft_strlen(string3)*sizeof(char));
	printf("'%s'\n", string3);
	printf("'%s'\n", string4);
	ft_bzero(string4 + 5, ft_strlen(string4)*sizeof(char));
	printf("'%s'\n\n", string4);
	
	return 0;
}*/