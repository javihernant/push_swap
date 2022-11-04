/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_instr3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:42:49 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/04 12:59:33 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rr(t_array *sta, t_array *stb, int print)
{
	ft_rotate(sta);
	ft_rotate(stb);
	if (print)
		ft_printf("rr\n");
	return (0);
}
