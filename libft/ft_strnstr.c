/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:45:11 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 01:42:09 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*position;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len)
	{
		j = 0;
		position = (char *)&haystack[i];
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return (position);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <bsd/string.h>
// add the flag -lbsd  in the compilation

int main(void)
{
    char str[100] = 
	"Será que São Paulo foi sempre São Paulo ou isso 
		é algo	que aconteceu com o tempo? Paulo São.";
    char to_find1[] = "é algo";
    printf("str: %s\n", str);
    printf("to_find: %s\n", to_find1);
    printf("ft_strstr: %p\n", ft_strnstr(str, to_find1, 100));
    printf("   strstr: %p\n", strnstr(str, to_find1, 100));

    char to_find2[] = "XXX";
    printf("to_find: %s\n", to_find2);
    printf("ft_strstr: %p\n", ft_strnstr(str, to_find2, 10));
    printf("   strstr: %p\n", strnstr(str, to_find2, 10));

    char to_find3[] = "";
    printf("to_find: %s\n", to_find3);
    printf("ft_strstr: %p\n", ft_strnstr(str, to_find3, 10));
    printf("   strstr: %p\n", strnstr(str, to_find3, 10));
    
    return (0);
}*/