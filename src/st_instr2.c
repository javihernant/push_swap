/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_instr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:52:14 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/04 12:59:14 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ra(t_array *sta, int print)
{
	ft_rotate(sta);
	if (print)
		ft_printf("ra\n");
	return (0);
}

int	ft_rra(t_array *sta, int print)
{
	ft_rrotate(sta);
	if (print)
		ft_printf("rra\n");
	return (0);
}

int	ft_rb(t_array *stb, int print)
{
	ft_rotate(stb);
	if (print)
		ft_printf("rb\n");
	return (0);
}

int	ft_rrb(t_array *stb, int print)
{
	ft_rrotate(stb);
	if (print)
		ft_printf("rrb\n");
	return (0);
}

int	ft_rrr(t_array *sta, t_array *stb, int print)
{
	ft_rrotate(sta);
	ft_rrotate(stb);
	if (print)
		ft_printf("rrr\n");
	return (0);
}
