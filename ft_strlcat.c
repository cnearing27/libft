/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:04:35 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/24 13:00:31 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

static int	ft_strlenn(char	*str, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (-1);
	while (str[i])
	{
		if (i >= dstsize - 1)
			return (-1);
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;
	size_t	llen;
	int		dstlen;
	char	*str;

	str = (char *)src;
	i = 0;
	dstlen = ft_strlenn(dst, dstsize);
	if (dstlen == -1)
		return (ft_strlen(str) + dstsize);
	llen = dstlen + ft_strlen(str);
	while (str[i] != '\0' && i < dstsize - dstlen - 1)
	{
		dst[dstlen + i] = str[i];
		i++;
	}
	if (llen <= dstsize)
		dst[llen] = '\0';
	 else
		dst[dstsize - 1] = '\0';
	return (llen);
}
