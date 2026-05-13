/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 10:59:12 by ferde-so          #+#    #+#             */
/*   Updated: 2026/03/05 12:36:43 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	int	number;

	number = 100;
	printf("nbr = %d\n", number);
	write(1, &number, 1);
	write(1, "\n", 1);
	ft_ft(&number);
	printf("nbr = %d\n", number);
	write(1, &number, 1);
	return (0);
}*/
