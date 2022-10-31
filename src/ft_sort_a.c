/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:45:53 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/31 18:24:15 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_a(t_array *sta)
{
	int	max;
	int	last;
	int	i;
	int	swap;

	if (sta->top != 3)
		return (0);
	max = ft_find_max(sta);
	last = ((int *)sta->arr)[max];
	i = (max + 1) % sta->top;
	swap = 0;
	while (i != max)
	{
		if (((int *)sta->arr)[i] > last)
		{
			swap = 1;
			break ;
		}
		last = ((int *)sta->arr)[i];
		i = (i + 1) % sta->top;
	}
	if (swap)
		ft_sa(sta);
	return (0);
}
