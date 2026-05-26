#include <stdlib.h>

void *ft_calloc(unsigned int num, unsigned int size)
{
	void		*ptr;
	unsigned int i;

	ptr = malloc(num * size);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < num * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>

int main (void)
{
    int *ptr;
    int n = 5;

    ptr = ft_calloc(n, sizeof(int));
    free(ptr);
    return (0);
}*/
