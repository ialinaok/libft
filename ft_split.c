/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:29:28 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/23 16:01:39 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	count_strings(const char *s, char c)
{
	int	i;
	int	strings;

	i = 0;
	strings = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			strings++;
			while (s[i] != c && s[i] != '\0')
				i++;
			i++;
		}
	}
	return (strings);
}

static int	memcal(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			i++;
			s++;
		}
	}
	return (i);
}

static char	*put_strings(const char *s, char c)
{
	int		i;
	int		j;
	char	*strings;

	i = 0;
	j = 0;
	strings = malloc(memcal(s, c) + count_strings(s, c) * 1);
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			strings[j++] = s[i++];
		}
		if (s[i] == '\0')
			break ;
		strings[j++] = '\0';
	}
	return (strings);
}

char *put_split(char *strings)
{
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*strings;
	int		j;
	int		mem;

	split = malloc((count_strings(s, c) + 1) * sizeof(char *));
	// if (!s || !split || !strings)
	// 	return (0);
	mem = memcal(s, c) + count_strings(s, c) * 1;
	if (mem == 0)
	{
		*split = NULL;
		return (split);
	}
	strings = put_strings(s, c);
	j = 0;
	while (mem > 0)
	{
		split[j] = put_split(strings);
		j++;
		while (*strings++ != '\0')
		{
			mem--;
		}
		strings++;
		mem--;
	}
	return (split);
}
// int	main(void)
// {
// 	char	str[] = "";
// 	char	c;
// 	int		n;

// 	c = ',';
// 	n = count_strings(str, c);
// 	printf("this is the string: %s\n", str);
// 	printf("it has  %d  words\n", n);
// 	return (0);
// }