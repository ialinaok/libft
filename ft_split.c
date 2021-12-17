/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:29:28 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/16 21:19:08 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	**ft_split(char const*s, char c)
{
	
}

static	int	memcal(char *s, char c)
{
	int i;
	
	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			s++;
		}
		if (*s != c)
		{
			i++;
			s++;
		}
	}
	return (i);
}

static	int	easy_trim(char *str, char c)
{
	int	i;

	if (str[0] == '\0')
	{
		return (0);
	}
	i = ft_strlen(str) - 1;
		if (str[i] == c)
		{
			while (str[i] == c && i > 0)
			{
				i--;
			}
		}
		return (i);
}

static	int	count_strings(char *str, char c)
{
	int	wrd;
	int	n;
	
	wrd = 0;
	n = easy_trim(str, c);
	while (n > 0)
	{
		if (str[n] == c && n != 0)
		{
			while (str[n] == c && n != 0)
			{
				n--;
			}
			wrd++;
		}
		n--;
	}
	if (str[0] != c && str[0] != '\0')
	{
		return (wrd + 1);
	}
	return (wrd);
}

int	main(void)
{
	char	str[] = "";
	char	c;
	int		n;

	c = ',';
	n = count_strings(str, c);
	printf("this is the string: %s\n", str);
	printf("it has  %d  words\n", n);
	return (0);
}