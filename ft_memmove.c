/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:04:18 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/07 15:20:06 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	if (src1 < dest1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest1[i] = src1[i];
		}
		return (dest);
	}
	while (n > 0)
	{
		*(dest1++) = *(src1++);
		n--;
	}
	return (dest);
}
