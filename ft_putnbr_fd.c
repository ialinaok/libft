/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:47:47 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/17 02:06:45 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	intprint;

	if ((n <= 2147483647) && (n >= -2147483648))
	{
		intprint = n 
	}
	write(fd, &n, sizeof(int));
}
