/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:27:51 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/03 14:46:14 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// create free all if some array fails and use pointers

static int	ft_count_pieces(const char *s, char c)
{
	int	i;
	int	pieces;

	i = 0;
	pieces = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			pieces++;
		i++;
	}
	return (pieces);
}

static char	*ft_str_copy_se(const char *src, int start, int end)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (end - start + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (start < end)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	size_t	index;
	size_t	start;
	size_t	i;

	splitted = malloc((ft_count_pieces(s, c) + 1) * sizeof(char *));
	if (s == 0 || splitted == 0)
		return (0);
	i = 0;
	index = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			splitted[index] = ft_str_copy_se(s, start, i);
			index++;
		}
		else
			i++;
	}
	splitted[index] = 0;
	return (splitted);
}

/*#include <stdio.h>

int main(void)
{
	int i;
	int size;
    char text[] = "abracadabra";
	char **splitted;
	
	char c1 = 'b';
	printf("'%s'. '%c'\n", text, c1);
	splitted = ft_split(text, c1);
	size = ft_count_pieces(text, c1);
	i = 0;
	while (i < size)
	{
		printf("'%s'\n", splitted[i]);
		free (splitted[i]);
		i++;
	}
	free (splitted);

	char c2 = 'a';
	printf("'%s'. '%c'\n", text, c2);
	splitted = ft_split(text, c2);
	size = ft_count_pieces(text, c2);
	i = 0;
	while (i < size)
	{
		printf("'%s'\n", splitted[i]);
		free (splitted[i]);
		i++;
	}
	free (splitted);
	
    return (0);
}*/