/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:02:51 by jahernan          #+#    #+#             */
/*   Updated: 2022/11/05 13:31:03 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "libft.h"
# define NUM_INSTR 11
# define I_RA	0
# define I_RB	1
# define I_RR	2
# define I_RRA	3
# define I_RRB	4
# define I_RRR	5
# define I_PA	6
# define I_PB	7
# define I_SA	8
# define I_SB	9
# define I_SS	10

int		ft_push_swap(t_array *sta, t_array *stb);
int		ft_pop(t_array *st);
int		ft_push(int num, t_array *st);
void	ft_rrotate(t_array *st);
void	ft_rotate(t_array *st);
void	ft_swap(t_array *st);
int		ft_fill_a(t_array *sta, char *argv[], int argc);
int		ft_push_all_b(t_array *stb, t_array *sta);
int		ft_sort_a(t_array *sta);
int		ft_sort_a_final(t_array *sta);
void	ft_print_stack(t_array *st);
void	ft_init_instrs(int *instrs);
int		ft_exec_all(int *exec, t_array *sta, t_array *stb);
int		ft_exec_ab(int instr, t_array *sta, t_array *stb, int print);
int		ft_exec_a(int instr, t_array *sta, int print);
int		ft_exec_b(int instr, t_array *stb, int print);
void	ft_show_stacks(t_array *sta, t_array *stb);
int		ft_is_above(size_t i, size_t len);
int		ft_find_min(t_array *arr);
int		ft_find_max(t_array *arr);
int		ft_is_repeated(int val, t_array *st);
char	ft_dig_at(int idx, int num);
int		ft_count_digs(int num);
void	ft_2dfree(char **strs);
int		ft_checkarg(char *str, t_array *sta);
void	ft_error(void);
int		ft_init_stacks(int argc, t_array *sta, t_array *stb);
size_t	ft_count_sorted(t_array *st);
int		ft_pb(t_array *stb, t_array *sta, int print);
int		ft_pa(t_array *sta, t_array *stb, int print);
int		ft_sa(t_array *sta, int print);
int		ft_sb(t_array *stb, int print);
int		ft_ss(t_array *sta, t_array *stb, int print);
int		ft_ra(t_array *sta, int print);
int		ft_rb(t_array *stb, int print);
int		ft_rr(t_array *sta, t_array *stb, int print);
int		ft_rra(t_array *sta, int print);
int		ft_rrb(t_array *stb, int print);
int		ft_rrr(t_array *sta, t_array *stb, int print);
int		ft_push_optimal_a(t_array *sta, t_array *stb);
void	ft_calc_instrs(t_array *sta, t_array *stb, size_t i, int *exec);
void	ft_optimize(int *exec);
void	ft_calc_instrs_a(t_array *sta, int elem2push, int *exec);
void	ft_calc_instrs_b(int idx, size_t top, int *exec);
#endif
