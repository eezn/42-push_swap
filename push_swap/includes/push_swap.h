/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 01:02:05 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 21:24:41 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../../libft/includes/libft.h"
# include "data_structure.h"

# define THRESHOLD 3

# define TRUE 1
# define FALSE 0

# define ASC 0
# define DESC 1

# define MIN 0
# define MAX 1

# define ONE_THIRD 1
# define TWO_THIRD 2
# define MEDIAN 3

typedef struct s_var	t_var;

struct		s_var
{
	int		i;
	int		push;
	int		n_ra;
	int		n_rb;
	int		n_rr;
	int		one_third;
	int		two_third;
};

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
void		print_a_stack(t_stack *stack);
void		print_b_stack(t_stack *stack);
void		print_stack(t_stack *a, t_stack *b);

/*
**Processing
*/
void		push_swap(t_stack *a, t_stack *b);

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

void		asc_two(t_stack *a);
void		asc_three(t_stack *a);
void		asc_four(t_stack *a, t_stack *b);
void		asc_five(t_stack *a, t_stack *b);

void		desc_two(t_stack *b);
void		desc_three(t_stack *b);
void		desc_four(t_stack *a, t_stack *b);
void		desc_five(t_stack *a, t_stack *b);

void		top_three_asc(t_stack *a);
void		top_three_desc(t_stack *b);

int			is_sorted(t_stack *stack, int nelem, int order);
int			get_partition(t_stack *stack, int nelem, int position);
t_var		*init_var(t_stack *stack, int nelem);

int			break_q_sort(t_stack *a, t_stack *b, int nelem, int order);
int			traverse_a(t_stack *a, int nelem, int pivot, int p);
int			traverse_b(t_stack *b, int nelem, int pivot, int p);
void		rr_or_r(t_stack *a, t_stack *b, t_var *var);

void		three_divisions_a(t_stack *a, t_stack *b, int nelem);
void		three_divisions_b(t_stack *a, t_stack *b, int nelem);

#endif
