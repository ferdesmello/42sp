/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:02 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/01 16:17:17 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("%c, %d, %d\n", '0', isalnum('0'), ft_isalnum('0'));
	printf("%c, %d, %d\n", '9', isalnum('9'), ft_isalnum('9'));
	printf("%c, %d, %d\n", 'a', isalnum('a'), ft_isalnum('a'));
	printf("%c, %d, %d\n", '!', isalnum('!'), ft_isalnum('!'));
	printf("%c, %d, %d\n", ' ', isalnum(' '), ft_isalnum(' '));
	return 0;
}*/