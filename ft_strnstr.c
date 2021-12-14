/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 00:49:39 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/14 19:09:30 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
//#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*ptr_s1;
	char	*ptr_s2;
	size_t	r_str;
	char	*occ;

	ptr_s1 = (char *)s1;
	ptr_s2 = (char *)s2;
	if (*s2 == '\0')
	{
		return (ptr_s1);
	}
	while ((*ptr_s1 != *ptr_s2) && (n > 0))
	{
		ptr_s1++;
		n--;
	}
	occ = ptr_s1;
	while (((n - 1) > 0) && ft_strlen(s2))
	{
		r_str = ft_strncmp(ptr_s1, ptr_s2, ft_strlen(s2));
		n--;
	}
	if (r_str == 0)
	{
		return (occ);
	}
	return (NULL);
}

// char	*ft_strnstr(const char *s1, const char *s2, size_t n)
// {
// 	char	*ptr_s1;
// 	char	*ptr_s2;
// 	char	*occ;
// 	ptr_s1 = (char *)s1;
// 	ptr_s2 = (char *)s2;
// 	if (*ptr_s2 == '\0')
// 	{
// 		return (ptr_s1);
// 	}
// 	while ((*ptr_s1 != *ptr_s2) && (n > 0))
// 	{
// 		ptr_s1++;
// 		n--;
// 	}
// 	occ = ptr_s1;
// 	while ((n > 0) && (*ptr_s1 == *ptr_s2))
// 	{
// 		ptr_s1++;
// 		ptr_s2++;
// 		if (*ptr_s2 == '\0')
// 		{
// 			return (occ);
// 		}
// 		if (*ptr_s1 == '\0')
// 		{
// 			return (NULL);
// 		}
// 		n--;
// 	}
// 	return (NULL);
// }

// int	main(void)
// {
// 	char	arr1[] = "Nomadland";
// 	char	arr2[] = "land";
// 	char	*r;

// 	printf("strings are: s1 = '%s';\ns2 = '%s'\n", arr1, arr2);
// 	r = ft_strnstr(arr1, arr2, 14);
// 	printf("the address of 'l' in s1 is: %p\n", &arr1[5]);
// 	printf("the address of s1 is: %p\n", arr1);
// 	printf("the return value is: %p", r);
// 	return (0);
// }