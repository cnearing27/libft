/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:55:15 by cnearing          #+#    #+#             */
/*   Updated: 2021/10/24 17:59:27 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_any(const char	*str)
{
	int	i;

	i = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		&& (str[i] != '\0'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		if (str[i] == '+')
			i++;
	}
	return (i);
}

int	ft_atoi(const char	*str)
{
	int				i;
	int				sign;
	long long int	num;

	num = 0;
	sign = 1;
	i = skip_any(str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		if (num < 0 && sign == -1)
			return (0);
		if (num < 0 && sign == 1)
			return (-1);
		i++;
	}
	return (num * sign);
}
