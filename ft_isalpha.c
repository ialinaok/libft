/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:05:58 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/10 21:23:49 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
// 	if (ft_isalpha('A') == 0)
// 	{
// 		printf("This is not alphabet \n");
// 	}
// 	else
// 	{
// 		printf("This is alphabet \n");
// 	}
// 	return (0);
// }
