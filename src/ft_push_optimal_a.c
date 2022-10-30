/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_optimal_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:37:48 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/30 20:13:21 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_optimal_a(t_array *sta, t_array *stb)
{
	size_t	i;
	int		exec[NUM_INSTR];
	int		exec_tmp[NUM_INSTR];

	if (stb->top < 1)
		return (0);
	ft_calc_instrs(sta, stb, 0, exec);
	i = 1;
	while (i < stb->top)
	{
		//ft_calc_instrs(sta, stb, i, exec_tmp);
		//ft_save_if_better(exec, exec_tmp);
		i++;
	}
	//ft_exec(exec);
	return (0);
}
