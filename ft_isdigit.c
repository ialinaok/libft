/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:06:17 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/11 10:03:24 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
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
// 	if (ft_isdigit('9') == 0)
// 	{
// 		printf("This is not a digit \n");
// 	}
// 	else
// 	{
// 		printf("This is a digit \n");
// 	}
// 	return (0);
// }
