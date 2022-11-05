/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_optimal_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:37:48 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/05 20:30:32 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_instr(int *instrs)
{
	int	c;
	int	i;

	i = 0;
	c = 0;
	while (i < NUM_INSTR)
	{
		c += instrs[i];
		i++;
	}
	return (c);
}

static void	ft_save_if_better(int *exec, int *exec_tmp)
{
	int	i;

	if (ft_count_instr(exec_tmp) < ft_count_instr(exec))
	{
		i = 0;
		while (i < NUM_INSTR)
		{
			exec[i] = exec_tmp[i];
			i++;
		}
	}
}

int	ft_push_optimal_a(t_array *sta, t_array *stb)
{
	size_t	i;
	int		exec[NUM_INSTR];
	int		exec_tmp[NUM_INSTR];

	if (stb->top == 0)
		return (0);
	ft_calc_instrs(sta, stb, 0, exec);
	i = 1;
	while (i < stb->top)
	{
		ft_calc_instrs(sta, stb, i, exec_tmp);
		ft_save_if_better(exec, exec_tmp);
		i++;
	}
	ft_exec_all(exec, sta, stb);
	return (0);
}
