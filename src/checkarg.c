/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:02:31 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/02 22:20:28 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static int	ft_is_repeated(int val, t_array *st)
{
	size_t	i;
	int		*arr;

	i = 0;
	arr = st->arr;
	while (i < st->top)
	{
		if (arr[i] == val)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_count_digs(int num)
{
	int		i;

	if (num == 0)
		return (1);
	if (num < 0)
		num = -num;
	i = 0;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static char	ft_dig_at(int idx, int num)
{
	char	digs[100];
	int		i;
	char	res;

	res = '\0';
	digs[0] = '0';
	i = 0;
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		digs[i] = '0' + (num % 10);
		num /= 10;
		i++;
	}
	if (idx < i)
		res = digs[i - idx];
	return (res);
}

static int	ft_is_gt_max(char *str, int max)
{
	int	digs;
	int	digs_max;
	int	i;

	digs_max = ft_count_digs(max);
	digs = 0;
	while (ft_isdigit(str[digs]))
		digs++;
	if (digs > digs_max)
		return (1);
	else if (digs == digs_max)
	{
		i = 0;
		while (i < digs_max)
		{
			if (str[i] > ft_dig_at(i, max))
				return (1);
		}
		return (0);
	}
	else
		return (0);
}

int	ft_checkarg(char *str, t_array *sta)
{
	int	val;
	int	i;

	if (*str == '+' || *str == '-')
		str++;
	i = 0;
	while (*str == '0')
		i++;
	if (i > 1)
		return (1);
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	if (ft_is_gt_max(str, INT_MAX))
		return (1);
	if (ft_is_gt_max(str, INT_MIN))
		return (1);
	i = 0;
	val = ft_atoi(str);
	if (ft_is_repeated(val, sta))
		return (1);
	return (0);
}
