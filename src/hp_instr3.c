/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hp_instr3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:04:58 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/03 18:00:52 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_array *st)
{
	int		*arr;
	size_t	i;

	arr = st->arr;
	i = st->top;
	while (i > 0)
	{
		ft_printf("%d\n", arr[i - 1]);
		i--;
	}
}

static int	ft_exec_b(int instr, t_array *stb)
{
	int	rc;

	rc = 0;
	if (instr == I_SB)
		ft_sb(stb);
	else if (instr == I_RB)
		ft_rb(stb);
	else if (instr == I_RRB)
		ft_rrb(stb);
	return (rc);
}

static int	ft_exec_a(int instr, t_array *sta)
{
	int	rc;

	rc = 0;
	if (instr == I_SA)
		ft_sa(sta);
	else if (instr == I_RA)
		ft_ra(sta);
	else if (instr == I_RRA)
		ft_rra(sta);
	return (rc);
}

static int	ft_exec_ab(int instr, t_array *sta, t_array *stb)
{
	int	rc;

	rc = 0;
	if (instr == I_PB)
	{
		rc = ft_pb(stb, sta);
	}
	if (instr == I_PA)
	{
		rc = ft_pa(sta, stb);
	}
	else if (instr == I_RR)
		ft_rr(sta, stb);
	else if (instr == I_RRR)
		ft_rrr(sta, stb);
	else if (instr == I_SS)
		ft_ss(sta, stb);
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
			if (sta != NULL && ft_exec_a(instr, sta) != 0)
				return (1);
			if (stb != NULL && ft_exec_b(instr, stb) != 0)
				return (1);
			if (sta != NULL && stb != NULL && ft_exec_ab(instr, sta, stb) != 0)
				return (1);
		}
		instr++;
	}
	return (0);
}
