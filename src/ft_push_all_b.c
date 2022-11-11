/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_all_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:56:04 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/11 17:37:54 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_middle_elem(t_array *st)
{
	int	*arr;
	int	elem;

	arr = malloc(st->top * sizeof(int));
	if (!arr)
		return (0);
	ft_memcpy(arr, st->arr, st->top * sizeof(int));
	ft_int_sort(arr, st->top);
	elem = arr[st->top / 2];
	free(arr);
	return (elem);
}

/* Checks from bottom to top that a is in order. If more than 3 are sorted
 * leave them in A and send everything else to B. Else keep only 3 (or less if
 * less than 3 elements) */
int	ft_push_all_b(t_array *stb, t_array *sta)
{
	size_t	keep;
	size_t	c;
	int		mid;
	int		el;
	int		*arr;

	if (sta->top > 150)
		mid = ft_middle_elem(sta);
	if (sta->top <= 3)
		return (0);
	arr = sta->arr;
	keep = 3;
	c = ft_count_sorted(sta);
	if (c > keep)
		keep = c;
	while (sta->top > keep)
	{
		el = ((int *)sta->arr)[sta->top - 1];
		ft_pb(stb, sta, 1);
		if (sta->top > 150 && el > mid)
		{
			ft_rb(stb, 1);
		}
	}
	return (0);
}
