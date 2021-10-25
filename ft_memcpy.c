/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:04:13 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/07 15:15:39 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	count)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < count)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}
