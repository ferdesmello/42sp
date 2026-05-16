/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:57:05 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/15 18:54:40 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	character;

	character = 'a';
	while (character <= 'z')
	{
		ft_putchar(character);
		character++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
