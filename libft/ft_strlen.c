/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:45:05 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/29 17:07:38 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/*#include <string.h>
#include <stdio.h>

// ‘size_t’ is defined in header ‘<stddef.h>’
int main (void)
{
	char	*string;
	
	string = "abc";
	printf("'%s', %zu, %u\n", string, strlen(string), ft_strlen(string));
	string = "12 jhghsf ";
	printf("'%s', %zu, %u\n", string, strlen(string), ft_strlen(string));
	string = "()~+kjdhdgh fsfsr64654";
	printf("'%s', %zu, %u\n", string, strlen(string), ft_strlen(string));
	return 0;
}*/