/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:25:37 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/15 16:25:40 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

/*#include <stdio.h>

int	main(void)
{
	char	*string;
	
	string = "abcdefghijklmnopqrstuvwxyz 10";
	printf("string = %s\n", string);
	printf("size = %d\n", ft_strlen(string));
	return (0);
}*/
