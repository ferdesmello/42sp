/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:05:55 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/01 16:07:28 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
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
	ft_putstr_fd("Hello World!\n", fd);
	close(fd);
	return (0);
}*/