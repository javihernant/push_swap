/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hp_instr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:32:25 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/31 20:08:39 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_array *s)
{
	int		tmp1;
	int		tmp2;
	size_t	i;

	if (s->top <= 1)
		return ;
	tmp1 = ((int *)s->arr)[s->top - 1];
	i = 0;
	while (i < s->top)
	{
		tmp2 = ((int *)s->arr)[i];
		((int *)s->arr)[i] = tmp1;
		tmp1 = tmp2;
		i--;
	}
}

void	ft_rrotate(t_array *s)
{
	int		tmp1;
	int		tmp2;
	size_t	i;

	if (s->top <= 1)
		return ;
	i = s->top;
	tmp1 = ((int *)s->arr)[0];
	while (i > 0)
	{
		tmp2 = ((int *)s->arr)[i - 1];
		((int *)s->arr)[i - 1] = tmp1;
		tmp1 = tmp2;
		i--;
	}
}

int	ft_push(int num, t_array *st)
{
	if (ft_arr_handle_outofbounds(st) != 0)
		return (1);
	((int *)st->arr)[st->top] = num;
	st->top++;
	return (0);
}

int	ft_pop(t_array *st)
{
	st->top--;
	return (((int *)st->arr)[st->top]);
}

void	ft_swap(t_array *st)
{
	int	tmp;
	int	*arr;

	if (st->top <= 1)
		return ;
	arr = st->arr;
	tmp = arr[st->top - 1];
	arr[st->top - 1] = arr[st->top - 2];
	arr[st->top - 2] = tmp;
}
