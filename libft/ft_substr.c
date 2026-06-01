/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 12:43:14 by ferde-so          #+#    #+#             */
/*   Updated: 2026/05/29 14:29:42 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*subs;

	s_len = ft_strlen((char *)s);
	if (start > s_len)
		return (0);
	if (start + len > s_len)
		len = s_len - start;
	subs = malloc(len + 1);
	i = 0;
	while (i < len && s[i + start] != '\0')
	{
		subs[i] = s[i + start];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

/*#include <stdio.h>

int main()
{
	char *substring;
    char str[100] = "Sera que Sao Paulo sempre foi Sao Paulo?";
    printf("'%s'\n", str);

	substring = ft_substr(str, 9, 9);
    printf("'%s'\n", substring);
	free(substring);

	substring = ft_substr(str, 15, 0);
    printf("'%s'\n", substring);
	free(substring);

	substring = ft_substr(str, 0, 100);
    printf("'%s'\n", substring);
    free(substring);
	
    return (0);
}*/