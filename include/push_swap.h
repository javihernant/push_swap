/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahernan <jahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:02:51 by jahernan          #+#    #+#             */
/*   Updated: 2022/10/29 19:13:51 by jahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "libft.h"

int		ft_push_swap(t_array *sta, t_array *stb);
int		ft_pop(t_array *st);
int		ft_push(int num, t_array *st);
void	ft_rrotate(t_array *s);
void	ft_rotate(t_array *s);
int		ft_push_all_b(t_array *stb, t_array *sta);
void	ft_print_stack(t_array *st);
void	ft_show_stacks(t_array *sta, t_array *stb);
int		ft_checkarg(char *str);
void	ft_error(void);
int		ft_pb(t_array *stb, t_array *sta);
int		ft_pa(t_array *sta, t_array *stb);
#endif
