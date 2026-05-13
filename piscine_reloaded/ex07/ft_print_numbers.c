/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:16:44 by ferde-so          #+#    #+#             */
/*   Updated: 2026/03/04 11:09:10 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char	character;

	character = '0';
	ft_print_numbers();
	printf("\n");
	while (character <= '9')
	{
		printf("%d,", character);
		character++;
	}
	return (0);
}*/
