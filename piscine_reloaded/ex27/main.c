#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	char *data[10000];
	int file;

	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	else
	{
     	file = open(argv[1], O_RDONLY, 0); 
		while (read(file, data, 1000) > 0)
		{
			write(1, data, 1000);
		}
    	close(file); 
	}
	return (0);
}
