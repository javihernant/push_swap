/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:45:53 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/30 14:51:11 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_max_idx(t_array *sta)
{
	size_t	i;
	int		max;
	int		*arr;

	arr = sta->arr;
	i = 0;
	max = 0;
	while (i < sta->top)
	{
		if (arr[i] > arr[max])
			max = i;
		i++;
	}
	return (max);
}

int	ft_sort_a(t_array *sta)
{
	int	max;
	int	last;
	int	i;
	int	swap;

	if (sta->top <= 1)
		return (0);
	max = ft_max_idx(sta);
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
	/*
	1 2 3
	1 3 2
	2 1 3
	2 3 1
	3 1 2
	3 2 1
	*/
	return (0);
}
