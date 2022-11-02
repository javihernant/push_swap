/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:51:12 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/02 18:35:44 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_opt_rot(int *exec)
{
	if (exec[I_RA] > exec[I_RRA])
	{
		exec[I_RA] -= exec[I_RRA];
		exec[I_RRA] = 0;
	}		
	else
	{
		exec[I_RRA] -= exec[I_RA];
		exec[I_RA] = 0;
	}
	if (exec[I_RB] > exec[I_RRB])
	{
		exec[I_RB] -= exec[I_RRB];
		exec[I_RRB] = 0;
	}		
	else
	{
		exec[I_RRB] -= exec[I_RB];
		exec[I_RB] = 0;
	}
}

void	ft_opt_double(int *exec)
{
	if (exec[I_RA] < exec[I_RB])
	{
		exec[I_RB] -= exec[I_RA];
		exec[I_RR] = exec[I_RA];
		exec[I_RA] = 0;
	}
	else
	{
		exec[I_RA] -= exec[I_RB];
		exec[I_RR] = exec[I_RB];
		exec[I_RB] = 0;
	}
	if (exec[I_RRA] < exec[I_RRB])
	{
		exec[I_RRB] -= exec[I_RRA];
		exec[I_RRR] = exec[I_RRA];
		exec[I_RRA] = 0;
	}
	else
	{
		exec[I_RRA] -= exec[I_RRB];
		exec[I_RRR] = exec[I_RRB];
		exec[I_RRB] = 0;
	}
}

void	ft_optimize(int *exec)
{
	ft_opt_rot(exec);
	ft_opt_double(exec);
}
