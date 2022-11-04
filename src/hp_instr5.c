/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hp_instr5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:52:53 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/04 13:53:07 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
