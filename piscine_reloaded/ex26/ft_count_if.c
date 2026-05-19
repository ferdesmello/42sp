/*#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int ft_atoi(char *str)
{
	int number;

	number = 0;
	while (*str)
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number);
}

int test(char *str)
{
	int number;

	number = ft_atoi(str);
	if (number % 2 == 0)
		return(1);
	return (0);
}*/

int ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}

/*int main (void)
{
	char *lines[6];
	char **tab;
	int count;

	lines[0] = "10";
    lines[1] = "255";
    lines[2] = "3";
    lines[3] = "40";
    lines[4] = "5";
    lines[5] = NULL;
	tab = lines;
	count = ft_count_if(tab, &test);
	ft_putnbr(count);
	ft_putchar('\n');
	return (0);
}*/