/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:00:05 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/13 00:17:40 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cmp;

	ptr = (unsigned char *)s;
	cmp = (unsigned char)c;
	while (n > 0)
	{
		if (*ptr == cmp)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}
//
// int	main(void)
// {
// 	int	arr[] = {1, 2, 6, 23};
// 	char	arr1[] = "nomadland";
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	void	*r;
// 	void	*p;
// 	printf("address of integer -1 is: %p\n", &tab[3]);
// 	printf("base address of arr is: %p\n", arr);
// 	r = ft_memchr(tab, -1, 7);
// 	printf("return value is: %p\n", r);
// 	printf("string is: %s\n", arr1);
// 	printf("address of 1st a is: %p\n", &arr1[3]);
// 	p = ft_memchr(arr1, 'a', 6);
// 	printf("return value is: %p\n", p);
// 	return (0);
// }