/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_instr3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:42:49 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/31 22:42:09 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rr(t_array *sta, t_array *stb)
{
	ft_rotate(sta);
	ft_rotate(stb);
	ft_printf("RR\n");
	return (0);
}
