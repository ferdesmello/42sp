/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:45:19 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/25 16:39:20 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%c, %c\n", 'a', toupper('a'));
	printf("%c, %c\n", 'a', ft_toupper('a'));
	printf("%c, %c\n", 'F', toupper('F'));
	printf("%c, %c\n", 'F', ft_toupper('F'));
	printf("%c, %c\n", '3', toupper('3'));
	printf("%c, %c\n", '3', ft_toupper('3'));
	printf("%c, %c\n", '!', toupper('!'));
	printf("%c, %c\n", '!', ft_toupper('!'));
	
	return (0);
}*/