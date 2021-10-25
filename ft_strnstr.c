/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:04:58 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/24 14:03:07 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	i;
	int		j;
	int		llen;
	int		count;

	i = 0;
	llen = ft_strlen(needle);
	if (llen == 0)
		return ((char *)&haystack[0]);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		count = 0;
		while (needle[j] != '\0' && needle[j] == haystack[i + j] && i + j < len)
		{
			count++;
			j++;
		}
		if (count == llen)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
