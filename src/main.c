/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:32:18 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/02 19:29:52 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	init_vars(int argc, t_array *sta, t_array *stb)
{
	if (argc == 1)
		return (1);
	if (ft_init_arr(sta, 100, sizeof(int)) != 0)
		return (1);
	if (ft_init_arr(stb, 100, sizeof(int)) != 0)
	{
		ft_arr_free(sta);
		return (1);
	}
	return (0);
}

static void	ft_2dfree(char **strs)
{
	char	**next;

	while (*strs != NULL)
	{
		next = strs + 1;
		free(*strs);
		strs = next;
	}
	free(strs);
}

static int	ft_check_and_push(char **args, int i, t_array *sta)
{
	int	num;

	if (ft_checkarg(args[i], sta) != 0)
	{
		ft_arr_free(sta);
		ft_error();
		ft_2dfree(args);
		return (1);
	}
	num = ft_atoi(args[i]);
	if (ft_push(num, sta) != 0)
	{
		ft_2dfree(args);
		return (1);
	}
	return (0);
}

static int	ft_fill_a(t_array *sta, char *argv[], int argc)
{
	char	**args;
	int		i;

	while (--argc)
	{
		args = ft_split(argv[argc], ' ');
		i = 0;
		while (args[i] != NULL)
			i++;
		while (i > 0)
		{
			if (ft_check_and_push(args, i - 1, sta) != 0)
				return (1);
			i--;
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	t_array	sta;
	t_array	stb;

	if (init_vars(argc, &sta, &stb) != 0)
		return (1);
	if (ft_fill_a(&sta, argv, argc) != 0)
	{
		ft_arr_free(&stb);
		return (1);
	}
	ft_push_swap(&sta, &stb);
	ft_arr_free(&sta);
	ft_arr_free(&stb);
}
