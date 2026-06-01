#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
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
	ft_putchar_fd('A', fd);
	ft_putchar_fd('H', fd);
	ft_putchar_fd('f', fd);
	ft_putchar_fd('6', fd);
	close(fd);
	return (0);
}*/