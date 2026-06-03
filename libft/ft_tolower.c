/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:45:16 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:18:23 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%c, %c\n", 'a', tolower('a'));
	printf("%c, %c\n", 'a', ft_tolower('a'));
	printf("%c, %c\n", 'F', tolower('F'));
	printf("%c, %c\n", 'F', ft_tolower('F'));
	printf("%c, %c\n", '3', tolower('3'));
	printf("%c, %c\n", '3', ft_tolower('3'));
	printf("%c, %c\n", '!', tolower('!'));
	printf("%c, %c\n", '!', ft_tolower('!'));
	
	return (0);
}*/