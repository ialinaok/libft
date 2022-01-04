/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:12:27 by ialinaok          #+#    #+#             */
/*   Updated: 2022/01/04 19:14:38 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	ptr = (char *)malloc(nelem * elsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nelem * elsize);
	return (ptr);
}
