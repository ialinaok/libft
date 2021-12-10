/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:06:10 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/10 21:24:58 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	if (ft_isascii(678) == 0)
// 	{
// 		printf("This is not encoded in ASCII \n");
// 	}
// 	else
// 	{
// 		printf("This is encoded in ASCII \n");
// 	}
// 	return (0);
// }
