/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:49:57 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/18 14:49:57 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*new_string(char const	*s, char	c, int	i)
{
	int		j;
	int		k;
	char	*str;

	j = i;
	k = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i - j + 2));
	if (!str)
		return (0);
	while (s[j] != '\0' && s[j] != c)
	{
		str[k] = s[j];
		j++;
		k++;
	}
	str[k] = '\0';
	return (str);
}

static void	freee(int	i, char	**res)
{
	while (i > 0)
	{
		i--;
		free(res[i]);
	}
	free(res);
}

static void	ft_mal(char	**res, char const	*s, char	c)
{
	int		k;
	int		i;

	k = 0;
	i = 0;
	if (!res)
		return ;
	while (s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		if (s[k] != c && s[k] != '\0')
		{
			res[i] = new_string(s, c, k);
			if (!res[i])
			{
				freee(i, res);
				return ;
			}
			i++;
			while (s[k] != c && s[k] != '\0')
				k++;
		}
	}
	res[i] = NULL;
}

char	**ft_split(char const	*s, char	c)
{
	char	**res;
	int		k;
	int		count_arr;

	count_arr = 0;
	k = 0;
	if (!s)
		return (0);
	while (s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		if (s[k] != c && s[k] != '\0')
		{
			while (s[k] != c && s[k] != '\0')
				k++;
			count_arr++;
		}
	}
	res = (char **)malloc(sizeof(char *) * (count_arr + 1));
	ft_mal(res, s, c);
	if (!res)
		return (NULL);
	return (res);
}
