/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 22:12:14 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/17 22:26:30 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	len;
	char	*new_str;

	i = 0;
	len = ft_strlen(s);
	new_str = malloc(len + 1);
	while (s[i] != '\0')
	{
		f(i, s[i]);
		*new_str++ = s[i];
		i++;
	}
	*new_str = '\0';
	return (new_str);
}
