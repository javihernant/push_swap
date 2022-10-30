/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_instr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:04:52 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/30 13:50:51 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pb(t_array *stb, t_array *sta)
{
	int	num;

	if (sta->top == 0)
		return (0);
	num = ft_pop(sta);
	if (ft_push(num, stb) != 0)
		return (1);
	ft_printf("pb\n");
	return (0);
}

int	ft_pa(t_array *sta, t_array *stb)
{
	int	num;

	if (stb->top == 0)
		return (0);
	num = ft_pop(stb);
	if (ft_push(num, sta) != 0)
		return (1);
	ft_printf("pa\n");
	return (0);
}

int	ft_sa(t_array *sta)
{
	int	tmp;
	int	*arr;

	if (sta->top <= 1)
		return (0);
	arr = sta->arr;
	tmp = arr[sta->top - 1];
	arr[sta->top - 1] = arr[sta->top - 2];
	arr[sta->top - 2] = tmp;
	ft_printf("sa\n");
	return (0);
}

int	ft_sb(t_array *stb)
{
	int	tmp;
	int	*arr;

	if (stb->top <= 1)
		return (0);
	arr = stb->arr;
	tmp = arr[stb->top - 1];
	arr[stb->top - 1] = arr[stb->top - 2];
	arr[stb->top - 2] = tmp;
	ft_printf("sb\n");
	return (0);
}
