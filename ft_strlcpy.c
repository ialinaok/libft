/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:00:44 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/10 21:41:05 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dst_size)
{
	size_t	counter;

	counter = 0;
	if (dst_size > 0)
	{
		while (src[counter] != '\0')
		{
			if (counter == dst_size)
			{
				counter--;
				break ;
			}
			*(dest + counter) = *(src + counter);
			counter++;
		}
	}
	*(dest + counter) = '\0';
	while (*(src + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}

// int main(void)
// {
// 	char arr_src[6] = "Julia";
// 	char arr_dst[5] = "Anna";
// 	int n = 0;
// 	int  src_size;

// 	printf("Source string is: ");
// 	while (arr_src[n] != '\0')
// 	{
// 		printf("%c", arr_src[n]);
// 		n++;
// 	}
// 	printf("\ndestination string is: ");
// 	n = 0;
// 	while (arr_dst[n] != '\0')
// 	{
// 		printf("%c", arr_dst[n]);
// 		n++;
// 	}
// 	printf("\nafter the use of ft_strlcpy strings are:\n");
// 	ft_strlcpy(arr_dst, arr_src, 3);
// 	n = 0;
// 	printf("source string is: ");
// 	while (arr_src[n] != '\0')
// 	{
// 		printf("%c", arr_src[n]);
// 		n++;
// 	}
// 	printf("\n");
// 	printf("destination string is: ");
// 	n = 0;
// 	while (arr_dst[n] != '\0')
// 	{
// 		printf("%c", arr_dst[n]);
// 		n++;
// 	}
// 	printf("\n");
// 	src_size = ft_strlcpy(arr_dst, arr_src, 3);
// 	printf("size of source string is: %d \n", src_size);
// 	return (0);
// }
// counter is used to determine how much we can copy
// and to later guard overflow