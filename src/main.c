/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:32:18 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/06 20:05:56 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_array	sta;
	t_array	stb;
	int		rc;

	rc = 0;
	if (ft_init_stacks(argc, &sta, &stb) != 0)
		rc = 1;
	if (rc == 0 && ft_fill_a(&sta, argv, argc) != 0)
	{
		ft_error();
		rc = 1;
	}
	if (rc == 0 && sta.top > 1)
		rc = ft_push_swap(&sta, &stb);
	ft_arr_free(&sta);
	ft_arr_free(&stb);
	return (rc);
}
