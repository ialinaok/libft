/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:18:39 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/10 21:29:09 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*put_dest;
	const char		*put_src;

	put_dest = dest;
	put_src = src;
	while (n > 0)
	{
	}
	return (dest);
}

// int main(void)
// {
// 	char arr [5] = "Hola";
// 	int n = 0;
// 	while (arr[n] != '\0')
// 	{
// 		printf("%d", arr[n]);
// 		n++;
// 	}
// 	printf("\n");
// 	ft_memmove(arr, &arr[2], 2);
// 	n = 0;
// 	while (arr[n] != '\0')
// 	{
// 		printf("%d", arr[n]);
// 		n++;
// 	}
// 	return (0);
// }
//line 20
//put_dest = dest; 
//here I'm just passin the addresses so that 
//I can later dereference the value stored at thee