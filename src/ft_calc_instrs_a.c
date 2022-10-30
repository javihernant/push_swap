/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_instrs_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:40:46 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/30 21:07:28 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	ft_idx2move(t_array *sta, int elem2push)
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
	return (idx);
}

void	ft_calc_instrs_a(t_array *sta, int elem2push, int *exec)
{
	int	idx;	
	int	go_up;
	int	c;

	idx = ft_idx2move(sta, elem2push);
	if (idx != -1)
	{
		go_up = ft_is_above(idx, sta->size);
		c = 0;
		if (go_up)
		{
			c = sta->top - (idx + 1);
			while (c--)
				exec[I_RA]++;
		}
		else
		{
			c = idx;
			while (c--)
				exec[I_RRA]++;
		}
	}
}
