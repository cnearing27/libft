/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:20 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/18 14:50:20 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list	*lst)
{
	int	n;

	n = 0;
	while (lst)
	{
		n++;
		lst = lst->next;
	}
	return (n);
}
