/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:08 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/25 16:37:53 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int main (void)
{
	printf("%c, %d, %d\n", 'a', isalpha('a'), ft_isalpha('a'));
	printf("%c, %d, %d\n", 'Z', isalpha('Z'), ft_isalpha('Z'));
	printf("%c, %d, %d\n", '1', isalpha('1'), ft_isalpha('1'));
	printf("%c, %d, %d\n", '!', isalpha('!'), ft_isalpha('!'));
	printf("%c, %d, %d\n", ' ', isalpha(' '), ft_isalpha(' '));
	return 0;
}*/
