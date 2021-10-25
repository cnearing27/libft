/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:24 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/18 14:50:24 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*new_el;

	new_el = malloc(sizeof(t_list));
	if (!new_el)
		return (NULL);
	new_el->content = content;
	new_el->next = NULL;
	return (new_el);
}
