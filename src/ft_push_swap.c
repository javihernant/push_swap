/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:35:59 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/02 13:45:52 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_swap(t_array *sta, t_array *stb)
{
	if (ft_push_all_b(stb, sta) != 0)
		return (1);
	if (ft_sort_a(sta) != 0)
		return (1);
	while (stb->top > 0)
	{
		if (ft_push_optimal_a(sta, stb) != 0)
			return (1);
	}
	ft_sort_a_final(sta);
	return (0);
}
