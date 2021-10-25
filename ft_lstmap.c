/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:27 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/18 14:50:27 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *))
{
	t_list	*new_lst;
	t_list	*el;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		el = ft_lstnew(f(lst->content));
		if (!el)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, el);
		lst = lst->next;
	}
	return (new_lst);
}
