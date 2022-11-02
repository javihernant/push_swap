/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_instr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:52:14 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/02 17:32:25 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ra(t_array *sta)
{
	ft_rotate(sta);
	ft_printf("ra\n");
	return (0);
}

int	ft_rra(t_array *sta)
{
	ft_rrotate(sta);
	ft_printf("rra\n");
	return (0);
}

int	ft_rb(t_array *stb)
{
	ft_rotate(stb);
	ft_printf("rb\n");
	return (0);
}

int	ft_rrb(t_array *stb)
{
	ft_rrotate(stb);
	ft_printf("rrb\n");
	return (0);
}

int	ft_rrr(t_array *sta, t_array *stb)
{
	ft_rrotate(sta);
	ft_rrotate(stb);
	ft_printf("rrr\n");
	return (0);
}
