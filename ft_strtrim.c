/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:49:29 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/18 14:49:29 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fromset(char	simb, char const	*set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == simb)
			return (1);
		i++;
	}
	return (0);
}

static int	find_start(char const	*s1, char const	*set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (fromset(s1[i], set) == 1 && i <= j)
		i++;
	return (i);
}

static int	find_end(char const	*s1, char const	*set)
{
	int	j;

	j = ft_strlen(s1) - 1;
	while (fromset(s1[j], set) == 1 && j >= 0)
		j--;
	return (j);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	k = 0;
	if (!s1)
		return (NULL);
	i = find_start(s1, set);
	if (i == (int)ft_strlen(s1))
		res = malloc(sizeof(char) * 1);
	else
	{
		j = find_end(s1, set);
		res = malloc(sizeof(char) * (j - i + 2));
		if (!res)
			return (NULL);
		while (k < j - i + 1)
		{
			res[k] = s1[i + k];
			k++;
		}
	}
	res[k] = '\0';
	return (res);
}
