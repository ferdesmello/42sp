/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:24:55 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/15 16:24:56 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	a_value;
	int	b_value;

	a_value = 55;
	b_value = 100;
	printf("a_value = %d, b_value = %d\n", a_value, b_value);
	write(1, &a_value, 1);
	write(1, ", ", 2);
	write(1, &b_value, 1);
	write(1, "\n", 1);
	ft_swap(&a_value, &b_value);
	printf("a_value = %d, b_value = %d\n", a_value, b_value);
	write(1, &a_value, 1);
	write(1, ", ", 2);
	write(1, &b_value, 1);
	write(1, "\n", 1);
	return (0);
}*/
