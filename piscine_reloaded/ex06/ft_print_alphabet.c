/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 16:20:11 by ferde-so          #+#    #+#             */
/*   Updated: 2026/03/04 11:01:29 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	character;

	character = 'a';
	while (character <= 'z')
	{
		write(1, &character, 1);
		character++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char	character;

	character = 'a';
	ft_print_alphabet();
	printf("\n");
	while (character <= 'z')
	{
		printf("%d,", character);
		character++;
	}
	return (0);
}*/
