/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:58:02 by ialinaok          #+#    #+#             */
/*   Updated: 2022/01/04 19:27:30 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	if (ft_strlen(s) >= start)
	{
		while (len > 0)
		{
			substr[i] = s[start];
			i++;
			start++;
			len--;
		}
		substr[i] = '\0';
	}
	else
		ft_memset(substr, '\0', len + 1);
	return (substr);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*substr;
// 	size_t	i;

// 	i = 0;
// 	if (len == 0)
// 	{
// 		return (NULL);
// 	}
// 	if (ft_strlen(&s[start]) >= len)
// 	{
// 		substr = malloc(len + 1);
// 	}
// 	if (ft_strlen(&s[start]) < len)
// 	{
// 		substr = malloc(ft_strlen(&s[start]) + 1);
// 	}
// 	while (s[start] != '\0')
// 	{
// 		*substr[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	substr[i] = '\0';
// 	return (substr);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*substr;
// 	size_t	slen;

// 	slen = ft_strlen(&s[start]);
// 	if (slen >= len)
// 	{
// 		substr = malloc(len + 1);
// 		if (start >= ft_strlen(s))
// 		{
// 			ft_memset(substr, '\0', len + 1);
// 			return (substr);
// 		}
// 		ft_memcpy(substr, &s[start], len);
// 		substr[len] = '\0';
// 	}
// 	if (slen < len)
// 	{
// 		substr = malloc(slen + 1);
// 		ft_memcpy(substr, &s[start], slen);
// 		substr[slen] = '\0';
// 	}
// 	return (substr);
// }

// int	main(void)
// {
// 	char	arr[] = "Nomadland";
// 	int	i = 5;
// 	size_t len = 4;
// 	char	*arr2;

// 	arr2 = ft_substr(arr, i, len);
// 	printf("the first string is: %s\n", arr);
// 	printf("the substring is: %s\n", arr2);
// 	free(arr2);
// 	return (0);
// }