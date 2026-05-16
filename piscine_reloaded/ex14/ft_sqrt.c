/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:25:21 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/15 17:12:05 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	value;

	if (nb <= 0)
		return (0);
	value = 1;
	while (value * value < nb)
	{
		value++;
	}
	if (value * value == nb)
		return (value);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("V%d = %d\n", -4, ft_sqrt(-4));
	printf("V%d = %d\n", 0, ft_sqrt(0));
	printf("V%d = %d\n", 1, ft_sqrt(1));
	printf("V%d = %d\n", 2, ft_sqrt(2));
	printf("V%d = %d\n", 3, ft_sqrt(3));
	printf("V%d = %d\n", 4, ft_sqrt(4));
	printf("V%d = %d\n", 5, ft_sqrt(5));
	printf("V%d = %d\n", 16, ft_sqrt(16));
	printf("V%d = %d\n", 49, ft_sqrt(49));
	printf("V%d = %d\n", 144, ft_sqrt(144));
	printf("V%d = %d\n", 592, ft_sqrt(592));
	return (0);
}*/