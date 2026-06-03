/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:05:50 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:43:52 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	long_n;
	char		c;

	long_n = n;
	if (long_n < 0)
	{
		write(fd, "-", 1);
		long_n = -long_n;
	}
	if (long_n > 9)
	{
		ft_putnbr_fd(long_n / 10, fd);
	}
	c = (long_n % 10) + '0';
	write(fd, &c, 1);
}

/*#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_CREAT | O_TRUNC | O_WRONLY);
	if (fd == -1)
		return (1);
	printf("fd = %d\n", fd);
	printf("%d\n", 0);
	ft_putnbr_fd(0, fd);
	printf("\n%d\n", 1);
	ft_putnbr_fd(1, fd);
	printf("\n%d\n", 2147483647);
	ft_putnbr_fd(2147483647, fd);
	printf("\n%d\n", -2147483647);
	ft_putnbr_fd(-2147483647, fd);
	printf("\n%d\n", 500);
	ft_putnbr_fd(500, fd);
	close(fd);
	return (0);
}*/