/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:24:20 by ferde-so          #+#    #+#             */
/*   Updated: 2026/03/19 10:40:28 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/*#include <stdio.h>

int	main (void)
{
	printf("%d, %d\n", -5, ft_iterative_factorial(-5));
	printf("%d, %d\n", 0, ft_iterative_factorial(0));
	printf("%d, %d\n", 1, ft_iterative_factorial(1));
	printf("%d, %d\n", 4, ft_iterative_factorial(4));
	printf("%d, %d\n", 6, ft_iterative_factorial(6));
	printf("%d, %d\n", 9, ft_iterative_factorial(9));
	return (0);
}*/
