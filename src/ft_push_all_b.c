/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_all_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:56:04 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/03 21:25:14 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Checks from bottom to top that a is in order. If more than 3 are sorted
 * leave them in A and send everything else to B. Else keep only 3 (or less if
 * less than 3 elements) */
int	ft_push_all_b(t_array *stb, t_array *sta)
{
	size_t	keep;
	size_t	i;
	int		tmp;
	int		*arr;

	if (sta->top <= 3)
		return (0);
	arr = sta->arr;
	keep = 3;
	i = 1;
	tmp = arr[0];
	while (i < sta->top)
	{
		if (arr[i] > tmp)
			break ;
		tmp = arr[i];
		i++;
	}
	if (i > keep)
		keep = i;
	while (sta->top > keep)
		ft_pb(stb, sta);
	return (0);
}
