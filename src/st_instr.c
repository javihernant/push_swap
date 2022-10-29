/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_instr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:04:52 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/29 18:51:56 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pb(t_array *stb, t_array *sta)
{
	int	num;

	if (sta->top < 1)
		return (1);
	num = ft_pop(sta);
	if (ft_push(num, stb) != 0)
		return (1);
	ft_printf("pb\n");
	return (0);
}

int	ft_pa(t_array *sta, t_array *stb)
{
	int	num;

	if (stb->top < 1)
		return (1);
	num = ft_pop(stb);
	if (ft_push(num, sta) != 0)
		return (1);
	ft_printf("pa\n");
	return (0);
}
