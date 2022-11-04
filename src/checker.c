/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:02:51 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/04 13:46:56 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_array	sta;
	t_array	stb;

	if (init_stacks(argc, &sta, &stb) != 0)
		return (1);
	if (ft_fill_a(&sta, argv, argc) != 0)
	{
		ft_arr_free(&stb);
		return (1);
	}
	ft_fetch_and_exec(&sta, &stb);
	if (ft_is_sorted(&sta))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_arr_free(&sta);
	ft_arr_free(&stb);
}
