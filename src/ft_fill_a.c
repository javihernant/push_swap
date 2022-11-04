/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:48:28 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/04 13:54:11 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_and_push(char **args, t_array *sta)
{
	int	num;

	if (ft_checkarg(*args, sta) != 0)
		return (1);
	num = ft_atoi(*args);
	if (ft_push(num, sta) != 0)
		return (1);
	return (0);
}

int	ft_fill_a(t_array *sta, char *argv[], int argc)
{
	char	**args;
	int		i;
	int		rc;

	rc = 0;
	while (--argc)
	{
		args = ft_split(argv[argc], ' ');
		i = 0;
		while (args[i] != NULL)
			i++;
		while (i > 0)
		{
			if (ft_check_and_push(&args[i - 1], sta) != 0)
			{
				rc = 1;
				break ;
			}
			i--;
		}
		ft_2dfree(args);
	}
	return (rc);
}
