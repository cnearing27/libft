/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:04:30 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/24 14:37:14 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	int				i;
	unsigned char	*s_c;
	unsigned char	c_c;

	s_c = (unsigned char *)s;
	c_c = (unsigned char)c;
	i = 0;
	while (s_c[i] != '\0')
	{
		if (s_c[i] == c_c)
			return ((char *)&s_c[i]);
		i++;
	}
	if (s_c[i] == c_c)
		return ((char *)&s_c[i]);
	return (0);
}
