/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:34:25 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/14 19:08:22 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	count;

	i = 0;
	sign = 1;
	count = 0;
	while (nptr[i] == ' ')
	{
		i++;
	}
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		sign = 44;
		sign = sign - nptr[i];
		i++;
	}
	while ((nptr[i] >= 48) && (nptr[i] <= 57))
	{
		count = count * 10 + (nptr[i] - '0');
		i++;
	}
	return (count * sign);
}

// int	ft_atoi(const char *nptr)
// {
// 	int count;
// 	int	i;
// 	int	sign;

// 	count = 0;
// 	i = 0;
// 	sign = 1;
// 	while ((nptr[i] != '-') && (nptr[i] != '\0'))
// 	{
// 		if (nptr[i] == '-')
// 		{
// 			sign = -1;
// 			break ;
// 		}
// 		i++;
// 	}
// 	while ((nptr[i] != '\0') && ((nptr[i] >= 48) && (nptr[i] <= 57)))
// 	{
// 		count = count * 10 + (nptr[i] - '0');
// 		i++;
// 	}
// 	return (i*sign);
// }

// int	main(void)
// {
// 	char	arr[] = "   -2147483647";
// 	int		r;

// 	r = ft_atoi(arr);
// 	printf("the int value of arr is: %d\n", r);
// 	return (0);
// }