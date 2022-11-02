/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_instrs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:08:59 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/02 17:50:48 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_instrs(int *instrs)
{
	int	i;

	i = 0;
	while (i < NUM_INSTR)
	{
		instrs[i] = 0;
		i++;
	}
}

void	ft_calc_instrs(t_array *sta, t_array *stb, size_t i, int *exec)
{
	ft_init_instrs(exec);
	ft_calc_instrs_a(sta, ((int *) stb->arr)[i], exec);
	ft_calc_instrs_b(i, stb->top, exec);
	ft_optimize(exec);
	if (stb->top > 0)
		exec[I_PA]++;
}
