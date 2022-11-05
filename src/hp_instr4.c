/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hp_instr4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:59:19 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/05 17:42:49 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
}
