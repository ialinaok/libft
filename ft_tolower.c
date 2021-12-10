/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:10:22 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/10 21:21:54 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	int		l;

	if ((c >= 65) && (c <= 90))
	{
		l = c + 32;
		return (l);
	}
	else
	{
		return (c);
	}
}

// int main(void)
// {
//     int a = 'A';
//     int b = 'Q';
//     int c = 'Z';
//     int d = '!';
//     int e = 64;

//     printf("a --> %c\n", ft_tolower(a));
//     printf("p --> %c\n", ft_tolower(b));
//     printf("z --> %c\n", ft_tolower(c));
//     printf("! --> %d, %c\n", ft_tolower(d), ft_tolower(d));
//     printf("64 --> %d\n", ft_tolower(e));
//     return (0);
// }
