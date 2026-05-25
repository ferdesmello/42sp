/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:12 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/25 16:37:55 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int main (void)
{
	printf("%c, %d, %d\n", '0', isascii('0'), ft_isascii('0'));
	printf("%c, %d, %d\n", 'a', isascii('a'), ft_isascii('a'));
	printf("%c, %d, %d\n", '!', isascii('!'), ft_isascii('!'));
	printf("ç, %d, %d\n", isascii(231), ft_isascii(231));
	printf("ã, %d, %d\n", isascii(227), ft_isascii(227));
	return 0;
}*/