/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hp_instr3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:04:58 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/05 17:42:44 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_array *st)
{
	int		*arr;
	size_t	i;

	arr = st->arr;
	i = st->top;
	while (i > 0)
	{
		ft_printf("%d\n", arr[i - 1]);
		i--;
	}
}

void	ft_2dfree(char **strs)
{
	char	**next;
	char	**aux;

	aux = strs;
	while (*aux != NULL)
	{
		next = aux + 1;
		free(*aux);
		aux = next;
	}
	free(strs);
}

size_t	ft_count_sorted(t_array *st)
{
	size_t	i;
	int		tmp;
	int		*arr;

	arr = st->arr;
	if (st->top == 0)
		return (0);
	tmp = arr[0];
	i = 1;
	while (i < st->top)
	{
		if (arr[i] > tmp)
			break ;
		tmp = arr[i];
		i++;
	}
	return (i);
}

int	ft_init_stacks(int argc, t_array *sta, t_array *stb)
{
	int	rc;

	rc = 0;
	if (argc == 1)
		rc = 1;
	if (ft_init_arr(sta, 100, sizeof(int)) != 0)
		rc = 1;
	if (ft_init_arr(stb, 100, sizeof(int)) != 0)
		rc = 1;
	return (rc);
}

int	ft_is_repeated(int val, t_array *st)
{
	size_t	i;
	int		*arr;

	i = 0;
	arr = st->arr;
	while (i < st->top)
	{
		if (arr[i] == val)
			return (1);
		i++;
	}
	return (0);
}
