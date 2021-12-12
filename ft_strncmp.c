/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 23:03:56 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/12 14:48:57 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		if ((*s1 == '\0') || (*s2 == '\0'))
		{
			break ;
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	if (n == 0)
// 	{
// 		return (0);
// 	}
// 	while ((n > 0) && (*s1 != 0))
// 	{
// 		if (*s1 < *s2)
// 		{
// 			return ((unsigned char)*s1 - (unsigned char)*s2);
// 		}
// 		if (*s1 == *s2)
// 		{
// 			return ((unsigned char)*s1 - (unsigned char)*s2);
// 		}
// 		if (*s1 > *s2)
// 		{
// 			return ((unsigned char)*s1 - (unsigned char)*s2);
// 		}
// 		else
// 		{
// 			return (0);
// 		}
// 		n--;
// 		s1++;
// 		s2++;
// 	}
// }

// int	main(void)
// {
// 	char	arr[] = "something newer";
// 	char	arr2[] = "something new";
// 	int		n;
// 	size_t	size;

// 	printf("size of unsigned char: %lu\n", sizeof(unsigned char *));
// 	printf("size of const char*: %lu\n", sizeof(const char *));
// 	size = 14;
// 	printf("arr: %s\narr: %s\nsize is: %zu\n", arr, arr2, size);
// 	n = ft_strncmp(arr, arr2, size);
// 	printf("function return is: %d", n);
// 	return (0);
// }