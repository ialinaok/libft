/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:00:44 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/10 13:58:30 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dst_size)
{
	size_t	counter; //used later to determine how much we can cpy..

	counter = 0;
	if (dst_size > 0)
	{
		while (src[counter] != '\0') //.. and to guard overflow
		{
			if (counter == dst_size) //or could make ctr = dstsize -1 to save a line
			{
				counter--; //decrease for the sake of adding '\0' in the right place
				break ;
			}
			*(dest + counter) = *(src + counter);
			counter++;
		}
	}
	*(dest + counter) = '\0';
	while (*(src + counter) != '\0')//calculate the length of the src 
	{
		counter++;
	}
	return (counter);
}

int main(void)
{
    char arr_src[6] = "Julia";
    char arr_dst[5] = "Anna";
    int n = 0;
    int  src_size;

    printf("Source string is: ");
    while (arr_src[n] != '\0')
    {
        printf("%c", arr_src[n]);
        n++;
    }
    printf("\ndestination string is: ");
    n = 0;
    while (arr_dst[n] != '\0')
    {
        printf("%c", arr_dst[n]);
        n++;
    }
    printf("\nafter the use of ft_strlcpy strings are:\n");
    ft_strlcpy(arr_dst, arr_src, 3);
    n = 0;
    printf("source string is: ");
    while (arr_src[n] != '\0')
    {
        printf("%c", arr_src[n]);
        n++;
    }
    printf("\n");
    printf("destination string is: ");
    n = 0;
    while (arr_dst[n] != '\0')
    {
        printf("%c", arr_dst[n]);
        n++;
    }
    printf("\n");
    src_size = ft_strlcpy(arr_dst, arr_src, 3);
    printf("size of source string is: %d \n", src_size);
    return (0);
}