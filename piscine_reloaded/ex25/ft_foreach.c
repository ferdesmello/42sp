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

void test(int number)
{
	number = number*number;
	ft_putnbr(number);
	ft_putchar('\n');
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*int main (void)
{
	int *tab;

	tab = (int[]){1, 2, 3, 4, 5};
	ft_foreach(tab, 5, &test);
	return (0);
}*/