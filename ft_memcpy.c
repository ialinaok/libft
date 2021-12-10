/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:39:15 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/10 18:05:20 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*put_dest;
	const char		*put_src;

	put_dest = dest;
	put_src = src;
	while (n > 0)
	{
		*put_dest++ = *put_src++;
		n--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char arr[5] = "Hola";
// 	int n = 0;

// 	while (arr[n] != '\0')
// 	{
// 		printf("%c", arr[n]);
// 		n++;
// 	}
// 	ft_memcpy(arr, &arr[2], 2);
// 	n = 0;
// 	printf("\n");
// 	while (arr[n] != '\0')
// 	{
// 		printf("%c", arr[n]);
// 		n++;
// 	}
// }
