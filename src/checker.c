/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:02:51 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/08 18:18:29 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_fetch(char *str)
{
	if (ft_strcmp(str, "ra\n") == 0)
		return (I_RA);
	else if (ft_strcmp(str, "rb\n") == 0)
		return (I_RB);
	else if (ft_strcmp(str, "rr\n") == 0)
		return (I_RR);
	else if (ft_strcmp(str, "rra\n") == 0)
		return (I_RRA);
	else if (ft_strcmp(str, "rrb\n") == 0)
		return (I_RRB);
	else if (ft_strcmp(str, "rrr\n") == 0)
		return (I_RRR);
	else if (ft_strcmp(str, "pa\n") == 0)
		return (I_PA);
	else if (ft_strcmp(str, "pb\n") == 0)
		return (I_PB);
	else if (ft_strcmp(str, "sa\n") == 0)
		return (I_SA);
	else if (ft_strcmp(str, "sb\n") == 0)
		return (I_SB);
	else if (ft_strcmp(str, "ss\n") == 0)
		return (I_SS);
	return (-1);
}

static int	ft_fetch_and_exec(t_array *sta, t_array *stb)
{
	char	*line;
	int		instr;
	int		rc;

	line = get_next_line(0);
	while (line)
	{
		rc = 0;
		instr = ft_fetch(line);
		if (instr == -1)
			rc = 1;
		if (rc == 0 && ft_exec_a(instr, sta, 0) != 0)
			rc = 1;
		if (rc == 0 && ft_exec_b(instr, stb, 0) != 0)
			rc = 1;
		if (rc == 0 && ft_exec_ab(instr, sta, stb, 0))
			rc = 1;
		free(line);
		if (rc != 0)
			break ;
		line = get_next_line(0);
	}
	return (rc);
}

int	main(int argc, char *argv[])
{
	t_array	sta;
	t_array	stb;
	int		rc;

	rc = 0;
	if (ft_init_stacks(argc, &sta, &stb) != 0)
		rc = 1;
	if (rc == 0 && ft_fill_a(&sta, argv, argc) != 0)
		rc = 1;
	if (rc == 0 && ft_fetch_and_exec(&sta, &stb) != 0)
		rc = 1;
	if (rc == 0 && ft_count_sorted(&sta) == sta.top)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_arr_free(&sta);
	ft_arr_free(&stb);
	return (rc);
}
