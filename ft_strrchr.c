/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:05:03 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/24 14:38:40 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	int				i;
	unsigned char	*s_c;
	unsigned char	c_c;

	s_c = (unsigned char *)s;
	c_c = (unsigned char)c;
	i = 0;
	while (s_c[i] != '\0')
		i++;
	if (s_c[i] == c_c)
		return ((char *)&s_c[i]);
	while (i > 0)
	{
		if (s_c[i - 1] == c_c)
			return ((char *)&s_c[i - 1]);
		i--;
	}
	return (0);
}
