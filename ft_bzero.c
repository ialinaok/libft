/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:39:55 by ialinaok          #+#    #+#             */
/*   Updated: 2022/02/22 16:10:29 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function erases n bytes of memory starting at location pointed to by s */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*put;

	put = str;
	while (n > 0)
	{
		*put++ = '\0';
		n--;
	}
}
