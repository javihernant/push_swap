/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:03:26 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/05 13:20:20 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_exec_b(int instr, t_array *stb, int print)
{
	int	rc;

	rc = 0;
	if (instr == I_SB)
		ft_sb(stb, print);
	else if (instr == I_RB)
		ft_rb(stb, print);
	else if (instr == I_RRB)
		ft_rrb(stb, print);
	return (rc);
}

int	ft_exec_a(int instr, t_array *sta, int print)
{
	int	rc;

	rc = 0;
	if (instr == I_SA)
		ft_sa(sta, print);
	else if (instr == I_RA)
		ft_ra(sta, print);
	else if (instr == I_RRA)
		ft_rra(sta, print);
	return (rc);
}

int	ft_exec_ab(int instr, t_array *sta, t_array *stb, int print)
{
	int	rc;

	rc = 0;
	if (instr == I_PB)
	{
		rc = ft_pb(stb, sta, print);
	}
	if (instr == I_PA)
	{
		rc = ft_pa(sta, stb, print);
	}
	else if (instr == I_RR)
		ft_rr(sta, stb, print);
	else if (instr == I_RRR)
		ft_rrr(sta, stb, print);
	else if (instr == I_SS)
		ft_ss(sta, stb, print);
	return (rc);
}

int	ft_exec_all(int *exec, t_array *sta, t_array *stb)
{
	int	instr;

	instr = 0;
	while (instr < NUM_INSTR)
	{
		while (exec[instr]--)
		{
			if (sta != NULL && ft_exec_a(instr, sta, 1) != 0)
				return (1);
			if (stb != NULL && ft_exec_b(instr, stb, 1) != 0)
				return (1);
			if (sta != NULL && stb != NULL
				&& ft_exec_ab(instr, sta, stb, 1) != 0)
				return (1);
		}
		instr++;
	}
	return (0);
}
