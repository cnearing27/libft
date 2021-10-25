/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:55 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/18 14:50:55 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*el;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		el = ft_lstlast(*(lst));
		el->next = new;
	}
}
