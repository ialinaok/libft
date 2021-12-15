/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 22:22:06 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/15 23:15:44 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	int	end_of(char const *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}

// char	*ft_strtrim(char const *s1, char const *s2)
// {
// 	char	*str;
// 	int		i;
// 	int		j;
// 	int		k;
// 	int		len;

// 	i = 0;
// 	j = 0;
// 	while (s1[i])
// 	{
// 		while (s1[i] != s2[j]) //this part for the beginning
// 		{
// 			j++;
// 		}
// 		i++;
// 	}
// 	k = end_off(s1);
// 	j = 0;
// 	while (s1[k])
// 	{
// 		while (s1[k] != s2[j])
// 		{
// 			j++;
// 		}
// 		k--;
// 	}
// 	len = k - i;
// 	str = malloc(len + 1);
// 	ft_strlcpy(str, s1[i], len + 1);
// 	return (str);
// }

char    *ft_strtrim(char const *s1, char const *s2)
{
    char    *str;
    char    *ret;
    int        i;
    int        j;
    int        k;
    int        len;

    i = 0;
    j = 0;
    while (s2[j] != 0)
    {
      if(s1[i] == s2[j])
      {
        i++;
      }
      if(s1[i] != s2[j])
      {
        j++;
      }
    }
    k = end_of(s1);
    j = 0;
    while (s2[j] != 0)
    {
      if (s1[k] == s2[j])
      {
        k--;
      }
      if (s1[k] != s2[j])
      {
        j++;
      }
    }
    len = k - i;
    ret = str = malloc(len + 1);
    while (len > 0)
    {
      *str = s1[i];
      str++;
      i++;
      len--;
    }
    *str = '\0';
    return (ret);
}