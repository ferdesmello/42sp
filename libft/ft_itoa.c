/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:38:55 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:47:53 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	long_n;
	char		*str;
	int			len;

	long_n = n;
	len = len_int(long_n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (long_n < 0)
	{
		str[0] = '-';
		long_n = -long_n;
	}
	while (len > 0)
	{
		str[len - 1] = (long_n % 10) + '0';
		long_n = long_n / 10;
		len--;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", 0);
	printf("%s\n", ft_itoa(0));
	printf("\n%d\n", 1);
	printf("%s\n", ft_itoa(1));
	printf("\n%d\n", 2147483647);
	printf("%s\n", ft_itoa(2147483647));
	printf("\n%d\n", -2147483647);
	printf("%s\n", ft_itoa(-2147483647));
	printf("\n%d\n", 500);
	printf("%s\n", ft_itoa(500));

	return (0);
}*/