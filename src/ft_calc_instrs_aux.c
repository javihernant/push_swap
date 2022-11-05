/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_instrs_aux.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:40:46 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/31 23:42:21 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* find element that should be shifted to the top */
static	int	ft_find_elem2move(t_array *sta, int elem2push)
{
	size_t	i;
	int		idx;
	int		min;
	int		val;

	idx = -1;
	i = 0;
	while (i < sta->top)
	{
		val = ((int *)sta->arr)[i];
		if (val > elem2push)
		{
			if (idx == -1 || val < min)
			{
				min = val;
				idx = i;
			}
		}
		i++;
	}
	if (idx == -1)
		idx = ft_find_min(sta);
	return (idx);
}

void	ft_calc_instrs_a(t_array *sta, int elem2push, int *exec)
{
	int	idx;	
	int	go_up;
	int	instr;
	int	c;

	idx = ft_find_elem2move(sta, elem2push);
	go_up = ft_is_above(idx, sta->top);
	if (go_up)
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
}

void	ft_calc_instrs_b(int idx, size_t top, int *exec)
{
	int	go_up;
	int	instr;
	int	c;

	if (top <= 1)
		return ;
	go_up = ft_is_above(idx, top);
	if (go_up)
	{
		instr = I_RB;
		c = top - (idx + 1);
	}
	else
	{
		instr = I_RRB;
		c = idx + 1;
	}
	while (c--)
		exec[instr]++;
}
