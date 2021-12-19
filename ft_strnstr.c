/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 00:49:39 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/19 17:23:49 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*occ;

	if (*s2 == '\0')
	{
		return ((char *)s1);
	}
	while ((*s1 != *s2) && (n > 0) && *s1 != '\0')
	{
		s1++;
		n--;
	}
	occ = (char *)s1;
	while ((n > 0) && (*s1++ == *s2++))
	{
		if (*s2 == '\0')
		{
			return (occ);
		}
		if (*s1 == '\0')
		{
			return (NULL);
		}
		n--;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *s1, const char *s2, size_t n)
// {
// 	char	*ptr_s1;
// 	char	*ptr_s2;
// 	size_t	cmp;
// 	char	*occ;

// 	ptr_s1 = (char *)s1;
// 	ptr_s2 = (char *)s2;
// 	if (*s2 == '\0')
// 	{
// 		return (ptr_s1);
// 	}
// 	while ((*ptr_s1 != *ptr_s2) && (n > 0))
// 	{
// 		ptr_s1++;
// 		n--;
// 	}
// 	occ = ptr_s1;
// 	while ((n - 1) > 0)
// 	{
// 		cmp = ft_strncmp(ptr_s1, ptr_s2, ft_strlen(s2));
// 		n--;
// 	}
// 	if (cmp == 0)
// 	{
// 		return (occ);
// 	}
// 	return (NULL);
// }

// int	main(void)
// {
// 	char	arr1[] = "Nomadland";
// 	char	arr2[] = "land";
// 	char	*r;

// 	printf("strings are: s1 = '%s';\ns2 = '%s'\n", arr1, arr2);
// 	r = strnstr(arr1, arr2, 8);
// 	printf("the address of 'l' in s1 is: %p\n", &arr1[5]);
// 	printf("the address of s1 is: %p\n", arr1);
// 	printf("the return value is: %p", r);
// 	return (0);
// }