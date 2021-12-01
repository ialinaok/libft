/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:39:55 by ialinaok          #+#    #+#             */
/*   Updated: 2021/11/26 17:13:21 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*put;

	put = s;
	while (n > 0)
	{
		*put = '\0';
		*put++;
		n--;
	}
}

int	main(void)
{
	char	arr[5] = "Hola";
	int	n;

	n = 0;
	while (arr[n] != '\0')
	{
		printf("%c", arr[n]);
		n++;
	}
	ft_bzero(arr, 2);
	n = 2;
	while (arr[n] != '\0')
	{
		printf("%c", arr[n]);
		n++;
	}
	return (0);
}
