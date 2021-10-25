/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:04:03 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/24 14:30:44 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c_c;

	str = (unsigned char *)s;
	c_c = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (str[i] == c_c)
			return (&str[i]);
		i++;
		n--;
	}
	return (NULL);
}
