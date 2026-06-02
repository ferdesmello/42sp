/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:19 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/01 16:17:06 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("%c, %d, %d\n", '0', isprint('0'), ft_isprint('0'));
	printf("%c, %d, %d\n", 'a', isprint('a'), ft_isprint('a'));
	printf("%c, %d, %d\n", '!', isprint('!'), ft_isprint('!'));
	printf("%c, %d, %d\n", ' ', isprint(' '), ft_isprint(' '));
	printf("\\a, %d, %d\n", isprint('\a'), ft_isprint('\a'));
	printf("\\n, %d, %d\n", isprint('\n'), ft_isprint('\n'));
	return 0;
}*/