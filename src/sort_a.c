/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:45:53 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/05 13:34:08 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_a(t_array *sta)
{
	int	max;
	int	last;
	int	i;
	int	swap;

	if (sta->top != 3)
		return (0);
	max = ft_find_max(sta);
	last = ((int *)sta->arr)[max];
	i = (max + 1) % sta->top;
	swap = 0;
	while (i != max)
	{
		if (((int *)sta->arr)[i] > last)
		{
			swap = 1;
			break ;
		}
		last = ((int *)sta->arr)[i];
		i = (i + 1) % sta->top;
	}
	if (swap)
		ft_sa(sta, 1);
	return (0);
}

int	ft_sort_a_final(t_array *sta)
{
	int	exec[NUM_INSTR];
	int	instr;
	int	idx;
	int	c;

	ft_init_instrs(exec);
	idx = ft_find_min(sta);
	if (ft_is_above(idx, sta->top))
	{
		instr = I_RA;
		c = sta->top - (idx + 1);
	}
	else
	{
		instr = I_RRA;
		c = idx + 1;
	}
	while (c--)
		exec[instr]++;
	return (ft_exec_all(exec, sta, NULL));
}
