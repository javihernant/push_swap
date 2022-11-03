/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:02:31 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/03 18:10:24 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static int	ft_contains_nondigit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

static int	ft_contains_zeros_begining(char *str)
{
	int	i;

	i = 0;
	while (*str == '0')
		i++;
	if (i > 1)
		return (1);
	else
		return (0);
}

static char	ft_dig_at(int idx, int num)
{
	char	digs[100];
	int		i;
	char	res;
	char	dig;
	int		c_digs;

	res = '\0';
	i = 0;
	digs[i] = '0';
	c_digs = ft_count_digs(num);
	while (i < c_digs)
	{
		if (num % 10 < 0)
			dig = '0' - (num % 10);
		else
			dig = '0' + (num % 10);
		digs[i] = dig;
		num /= 10;
		i++;
	}
	if (i == 0)
		i++;
	if (idx < i)
		res = digs[i - 1 - idx];
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
			i++;
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
	int	sig;

	sig = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sig = 1;
		str++;
	}
	if (ft_contains_zeros_begining(str))
		return (1);
	if (ft_contains_nondigit(str))
		return (1);
	if (!sig && ft_is_gt_max(str, INT_MAX))
		return (1);
	if (sig && ft_is_gt_max(str, INT_MIN))
		return (1);
	i = 0;
	val = ft_atoi(str);
	if (ft_is_repeated(val, sta))
		return (1);
	return (0);
}
