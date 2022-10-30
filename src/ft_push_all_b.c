/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_all_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:56:04 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/30 18:59:47 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Checks from bottom to top that a is in order. If more than 3 are sorted
 * leave them in A and send everything else to B. Else keep only 3 (or less if
 * less than 3 elements) */
int	ft_push_all_b(t_array *stb, t_array *sta)
{
	while (sta->top > 3)
	{
		ft_pb(stb, sta);
	}
	return (0);
}
