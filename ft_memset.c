/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:14:17 by ialinaok          #+#    #+#             */
/*   Updated: 2021/11/26 15:25:55 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*put;

	put = s;//we want here to pass the adress that s stores to our new pointer
	//so that we can dereference it's value
	while (n > 0)
	{
		*put = c;
		*put++;
		n--;
	}
	return (s);
}

/*int main(void)
{
	char    str[5] = "Hola";
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		printf("%c", str[n]);
		n++;
	}
	printf("\n");
	ft_memset(str, 'M', sizeof(char) * 4);
	n = 0;
	while (str[n] != '\0')
	{
		printf("%c", str[n]);
		n++;
	}
	printf("\n");
	return (0);
}*/

int	main(void)
{
	int	arr[2] = {2, 3};
	int	n;

	n = 0;
	while (n < 2)
	{
		printf("%d", arr[n]);
		n++;
	}
	printf("\n");
	ft_memset(arr, 5, 8);
	n = 0;
	while (n < 2)
	{
		printf("%d", arr[n]);
		n++;
	}
	printf("\n");
	return (0);
}
