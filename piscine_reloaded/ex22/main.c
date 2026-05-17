#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
	int x;
	x = 1;
	printf("%d, %d\n", x, ABS(x));
	x = 500015;
	printf("%d, %d\n", x, ABS(x));
	x = -50;
	printf("%d, %d\n", x, ABS(x));
	x = 0;
	printf("%d, %d\n", x, ABS(x));
	return (0);
}
