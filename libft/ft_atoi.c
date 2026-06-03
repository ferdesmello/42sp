/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:33 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 00:52:29 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	number;
	int	i;
	int	sign;

	number = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	number = number * sign;
	return (number);
}

/*#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("'%s'\n'%d'\n'%d'\n\n", "1234567890", atoi("1234567890"), ft_atoi("1234567890"));
	printf("'%s'\n'%d'\n'%d'\n\n", "100023", atoi("100023"), ft_atoi("100023"));
	printf("'%s'\n'%d'\n'%d'\n\n", "001258", atoi("001258"), ft_atoi("001258"));
	printf("'%s'\n'%d'\n'%d'\n\n", "-78", atoi("-78"), ft_atoi("-78"));
	printf("'%s'\n'%d'\n'%d'\n\n", "---2", atoi("---2"), ft_atoi("---2"));
	printf("'%s'\n'%d'\n'%d'\n\n", "-+2", atoi("-+2"), ft_atoi("-+2"));
	printf("'%s'\n'%d'\n'%d'\n\n", "+-2", atoi("+-2"), ft_atoi("+-2"));
	printf("'%s'\n'%d'\n'%d'\n\n", "+555h5", atoi("+555h5"), ft_atoi("+555h5"));
	printf("'%s'\n'%d'\n'%d'\n\n", "+++3", atoi("+++3"), ft_atoi("+++3"));
	printf("'%s'\n'%d'\n'%d'\n\n", "adfdf54", atoi("adfdf54"), ft_atoi("adfdf54"));
	printf("'%s'\n'%d'\n'%d'\n\n", "   5454f", 	atoi("   5454f"), ft_atoi("   5454f"));
	return 0;
}*/