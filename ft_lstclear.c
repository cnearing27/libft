/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:47 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/18 14:50:47 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void	(*del)(void*))
{
	t_list	*el;
	t_list	*lst_copy;

	if (!lst || !*lst || !del)
		return ;
	lst_copy = *lst;
	while (lst_copy)
	{
		el = lst_copy->next;
		del(lst_copy->content);
		free(lst_copy);
		lst_copy = el;
	}
	*lst = NULL;
}
