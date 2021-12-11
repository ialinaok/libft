/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:43:04 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/11 15:34:10 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		n;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	n = size;
	while ((n != 0) && (*dst != '\0'))
	{
		dst++;
		n--;
	}
	if (n == 0)
	{
		return (size + src_len);
	}
	while (((n - 1) != 0) && (*src != '\0'))
	{
		*dst++ = *src++;
		n --;
	}
	*dst = '\0';
	return (dst_len + src_len);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	dst_len;
// 	size_t	src_len;
// 	size_t	n;

// 	n = size;
// 	dst_len = ft_strlen(dst);
// 	src_len = ft_strlen(src);
// 	while (((size - 1) > 0) && ((size - 1) > dst_len))
// 	{
// 		*dst++ = *src++;
// 		size--;
// 	}
// 	dst[n - 1] = '\0';
// 	if (n < dst_len)
// 	{
// 		return (dst_len + src_len);
// 	}
// 	else
// 	{
// 		return (n + src_len);
// 	}
// }

// int main(void)
// {
//   char dst[12] = "hello";
//   char src[7] = " world";
//   int   size;
//   size_t r;
//   size_t d;
//   size_t s;
//   size = 8;
//   printf("the dst string is %s\n", dst);
//   d = strlen(dst);
//   s = strlen(src);
//   printf("strlen(dst) = %zu\n", d);
//   printf("strlen(src) = %zu\n", s);
//   r = ft_strlcat(dst, src, size);
//   printf("after modification: '%s'; returned size is %zu\n", dst, r);
//   printf("size is: %d\n", size);
//   return (0);
// }
//line 29 at this point dst is at null's address
//n to store the original size