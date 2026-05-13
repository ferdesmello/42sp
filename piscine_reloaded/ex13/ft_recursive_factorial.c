/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:39:59 by ferde-so          #+#    #+#             */
/*   Updated: 2026/03/19 10:44:37 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = nb;
	if (nb > 1)
	{
		nb--;
		result = result * ft_recursive_factorial(nb);
		return (result);
	}
	return (1);
}

/*#include <stdio.h>

int	main (void)
{
	printf("%d, %d\n", -5, ft_recursive_factorial(-5));
	printf("%d, %d\n", 0, ft_recursive_factorial(0));
	printf("%d, %d\n", 1, ft_recursive_factorial(1));
	printf("%d, %d\n", 4, ft_recursive_factorial(4));
	printf("%d, %d\n", 6, ft_recursive_factorial(6));
	printf("%d, %d\n", 9, ft_recursive_factorial(9));
	return (0);
}*/
