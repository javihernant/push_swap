/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hp_instr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:41:36 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/31 23:29:19 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stacks(t_array *sta, t_array *stb)
{
	free(sta->arr);
	free(stb->arr);
}

void	ft_show_stacks(t_array *sta, t_array *stb)
{
	ft_printf("STACK A:\n");
	ft_print_stack(sta);
	ft_printf("STACK B:\n");
	ft_print_stack(stb);
}

/* returns true (1) if idx corresponds to an element in the upper half of
 * an array */
int	ft_is_above(size_t idx, size_t len)
{
	return (idx >= len / 2);
}

/* find min value and return its index */
int	ft_find_min(t_array *st)
{
	size_t	i;
	int		min;
	int		*arr;

	arr = st->arr;
	i = 0;
	min = 0;
	while (i < st->top)
	{
		if (arr[i] < arr[min])
			min = i;
		i++;
	}
	return (min);
}

/* find max value and return its index */
int	ft_find_max(t_array *st)
{
	size_t	i;
	int		max;
	int		*arr;

	arr = st->arr;
	i = 0;
	max = 0;
	while (i < st->top)
	{
		if (arr[i] > arr[max])
			max = i;
		i++;
	}
	return (max);
}
