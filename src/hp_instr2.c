/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hp_instr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:41:36 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/30 20:17:12 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stacks(t_array *sta, t_array *stb)
{
	free(sta->arr);
	free(stb->arr);
}

void	ft_show_stacks(t_array *sta, t_array *stb)
{
	ft_printf("STACK A:\n");
	ft_print_stack(sta);
	ft_printf("STACK B:\n");
	ft_print_stack(stb);
}

/* returns true (1) if idx corresponds to an element in the upper half of
 * an array */
int	ft_is_above(size_t idx, size_t size)
{
	return (idx < (size / 2));
}
