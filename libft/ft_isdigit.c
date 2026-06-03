/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:16 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:16:11 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("%c, %d, %d\n", '0', isdigit('0'), ft_isdigit('0'));
	printf("%c, %d, %d\n", '9', isdigit('9'), ft_isdigit('9'));
	printf("%c, %d, %d\n", 'a', isdigit('a'), ft_isdigit('a'));
	printf("%c, %d, %d\n", '!', isdigit('!'), ft_isdigit('!'));
	printf("%c, %d, %d\n", ' ', isdigit(' '), ft_isdigit(' '));
	return 0;
}*/