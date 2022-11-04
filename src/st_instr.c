/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_instr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:04:52 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/04 12:58:09 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pb(t_array *stb, t_array *sta, int print)
{
	int	num;

	if (sta->top == 0)
		return (0);
	num = ft_pop(sta);
	if (ft_push(num, stb) != 0)
		return (1);
	if (print)
		ft_printf("pb\n");
	return (0);
}

int	ft_pa(t_array *sta, t_array *stb, int print)
{
	int	num;

	if (stb->top == 0)
		return (0);
	num = ft_pop(stb);
	if (ft_push(num, sta) != 0)
		return (1);
	if (print)
		ft_printf("pa\n");
	return (0);
}

int	ft_sa(t_array *sta, int print)
{
	ft_swap(sta);
	if (print)
		ft_printf("sa\n");
	return (0);
}

int	ft_sb(t_array *stb, int print)
{
	ft_swap(stb);
	if (print)
		ft_printf("sb\n");
	return (0);
}

int	ft_ss(t_array *sta, t_array *stb, int print)
{
	ft_swap(sta);
	ft_swap(stb);
	if (print)
		ft_printf("ss\n");
	return (0);
}
