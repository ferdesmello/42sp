/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:35:25 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/20 16:33:02 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	char	buffer[8];
	int		file;
	int		bytes_read;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	file = open (argv[1], O_RDONLY);
	if (file < 0)
		return (1);
	bytes_read = read(file, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(file, buffer, sizeof(buffer));
	}
	close(file);
	return (0);
}
