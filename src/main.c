/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:32:18 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/04 13:55:15 by jahernan         ###   ########.fr       */
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
		ft_error();
		ft_arr_free(&stb);
		return (1);
	}
	ft_push_swap(&sta, &stb);
	ft_arr_free(&sta);
	ft_arr_free(&stb);
}
