/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:02:51 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/31 17:43:44 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "libft.h"
# define NUM_INSTR 7
# define I_PA	0
# define I_RA	1
# define I_RB	2
# define I_RR	3
# define I_RRA	4
# define I_RRB	5
# define I_RRR	6

int		ft_push_swap(t_array *sta, t_array *stb);
int		ft_pop(t_array *st);
int		ft_push(int num, t_array *st);
void	ft_rrotate(t_array *s);
void	ft_rotate(t_array *s);
int		ft_push_all_b(t_array *stb, t_array *sta);
int		ft_sort_a(t_array *sta);
void	ft_print_stack(t_array *st);
void	ft_show_stacks(t_array *sta, t_array *stb);
int		ft_is_above(size_t i, size_t size);
int		ft_find_min(t_array *arr);
int		ft_find_max(t_array *arr);
int		ft_checkarg(char *str);
void	ft_error(void);
int		ft_pb(t_array *stb, t_array *sta);
int		ft_pa(t_array *sta, t_array *stb);
int		ft_sa(t_array *sta);
int		ft_sb(t_array *stb);
int		ft_push_optimal_a(t_array *sta, t_array *stb);
void	ft_calc_instrs(t_array *sta, t_array *stb, size_t i, int *exec);
void	ft_calc_instrs_a(t_array *sta, int elem2push, int *exec);
#endif
