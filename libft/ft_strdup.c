#include <stdlib.h>

void *ft_strdup(const char *src)
{
	void		*dest;
	unsigned int i;
	unsigned int len;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = malloc(len + 1);
	if (dest == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		((char *)dest)[i] = src[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void) {
    const char *src = "Hello world!";
    char *dest = ft_strdup(src);

    printf("Original: '%s'\n", src);
    printf("Cópia   : '%s'\n", dest);

    free(dest);
    return (0);
}*/