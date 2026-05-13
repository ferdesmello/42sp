/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 10:30:04 by ferde-so          #+#    #+#             */
/*   Updated: 2026/03/18 14:17:55 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	*string;

	string = "ab-cde54jo kh8lfnd*mgg";
	printf("%s\n", string);
	ft_putstr(string);

	return (0);
}*/