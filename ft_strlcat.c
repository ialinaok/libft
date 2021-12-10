/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:43:04 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/10 21:35:44 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	n;

	n = size;
	dst_len = 0;
	while (*dst != '\0')
	{
		dst++;
		dst_len++;
	}
	while (((size - 1) > 0) && ((size - 1) > dst_len))
	{
		*dst++ = *src++;
		size--;
	}
	src_len = 0;
	while (*src != '\0')
	{
		src++;
		src_len++;
	}
	if (n < dst_len)
	{
		return (n + src_len);
	}
	else
	{
		return (dst_len + src_len);
	}
}

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