#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	int i;

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