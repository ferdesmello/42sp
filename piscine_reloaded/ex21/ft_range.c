#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int size;
	int *range;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc((size) * sizeof(int));
	if (range != NULL)
	{
		i = 0;
		while (i < size)
		{
			range[i] = min + i;
			i++;
		}
	}

	return (range);

}

/*#include <stdio.h>
int	main(void)
{
	int *range;
	int i;
	int min;
	int max;

	min = 2;
	max = 7;
	printf("%d, %d\n", min, max);
	range = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d, ", range[i]);
		i++;
	}
	printf("\n");
	free(range);

	min = -5;
	max = 8;
	printf("%d, %d\n", min, max);
	range = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d, ", range[i]);
		i++;
	}
	printf("\n");
	free(range);

	min = 15;
	max = 15;
	printf("%d, %d\n", min, max);
	range = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d, ", range[i]);
		i++;
	}
	printf("\n");
	free(range);

	min = 123;
	max = 2;
	printf("%d, %d\n", min, max);
	range = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d, ", range[i]);
		i++;
	}
	printf("\n");
	free(range);

	return (0);
}*/