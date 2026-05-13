/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 14:56:51 by ferde-so          #+#    #+#             */
/*   Updated: 2026/03/05 12:36:43 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 25;
	b = 10;
	div = 0;
	mod = 0;
	printf("a = %d, b = %d\n", a, b);
	printf("div = %d, mod = %d\n", div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d\n", a, b);
	printf("div = %d, mod = %d\n", div, mod);
	return (0);
}*/
