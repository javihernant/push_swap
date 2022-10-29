/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_all_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:56:04 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/29 18:59:54 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_all_b(t_array *stb, t_array *sta)
{
	while (sta->top > 3)
	{
		ft_pb(stb, sta);
	}
	return (0);
}
