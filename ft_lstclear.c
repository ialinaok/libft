/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:29:34 by ialinaok          #+#    #+#             */
/*   Updated: 2022/01/04 15:41:48 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*first;
	t_list	*next;

	if (lst && del)
	{
		next = *lst;
		while (next != NULL)
		{
			first = next;
			next = next->next;
			del(first->content);
			free(first);
		}
		*lst = NULL;
	}
}
