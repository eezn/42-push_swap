/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 05:16:38 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 21:28:12 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>
# include "../../libft/includes/libft.h"
# include "data_structure.h"
# include "get_next_line.h"

# define TRUE 1
# define FALSE 0
# define ASC 0
# define DESC 1

/*
**Utils
*/
void		print_error(char *str);

/*
**Preprocessing
*/
char		**get_args(int argc, char **argv);
void		check_args(char **args);
t_stack		*set_stack(char **args, int flag);

/*
**Checker
*/
void		checker(t_stack *a, t_stack *b);
int			is_valid_instr(char *instr, size_t len);
int			is_sorted(t_stack *stack, int nelem, int order);
void		call_instr(t_stack *a, t_stack *b, char *instr, size_t len);

int			swap(t_stack *stack);
int			sa(t_stack *a);
int			sb(t_stack *b);
int			ss(t_stack *a, t_stack *b);

void		push(t_stack *dst, t_stack *src);
int			pa(t_stack *a, t_stack *b);
int			pb(t_stack *a, t_stack *b);

void		rotate(t_stack *stack, int reverse);
int			ra(t_stack *a);
int			rb(t_stack *b);
int			rr(t_stack *a, t_stack *b);
int			rra(t_stack *a);
int			rrb(t_stack *b);
int			rrr(t_stack *a, t_stack *b);

#endif
