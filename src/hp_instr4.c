/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hp_instr4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:59:19 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/04 13:57:20 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_repeated(int val, t_array *st)
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

int	ft_count_digs(int num)
{
	int		i;

	i = 0;
	num /= 10;
	i++;
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

void	ft_error(void)
{
	ft_putstr_fd("Error!\n", 2);
}

char	ft_dig_at(int idx, int num)
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

int	init_stacks(int argc, t_array *sta, t_array *stb)
{
	if (argc == 1)
		return (1);
	if (ft_init_arr(sta, 100, sizeof(int)) != 0)
		return (1);
	if (ft_init_arr(stb, 100, sizeof(int)) != 0)
	{
		ft_arr_free(sta);
		return (1);
	}
	return (0);
}
