/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:04:53 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/24 11:28:10 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] == '\0' && ss2[i] != '\0')
			return (-1);
		if (ss1[i] != '\0' && ss2[i] == '\0')
			return (1);
		if (ss1[i] == '\0' && ss2[i] == '\0')
			return (0);
		if (ss1[i] > ss2[i])
			return (1);
		if (ss1[i] < ss2[i])
			return (-1);
		i++;
	}
	return (0);
}
