/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_instr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:04:52 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/31 20:09:52 by jahernan         ###   ########.fr       */
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
	ft_swap(sta);
	ft_printf("sa\n");
	return (0);
}

int	ft_sb(t_array *stb)
{
	ft_swap(stb);
	ft_printf("sb\n");
	return (0);
}

int	ft_ss(t_array *sta, t_array *stb)
{
	ft_swap(sta);
	ft_swap(stb);
	ft_printf("ss\n");
	return (0);
}
