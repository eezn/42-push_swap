/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_divisions_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 00:48:35 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:47:13 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	mid_part_a(t_stack *a, t_stack *b, t_var *var)
{
	var->push += pb(a, b);
	if (a->head->value >= var->two_third)
	{
		rr(a, b);
		(var->n_ra)++;
		(var->n_rb)++;
		(var->i)++;
	}
	else
		var->n_rb += rb(b);
}

void	three_divisions_a(t_stack *a, t_stack *b, int nelem)
{
	t_var	*var;

	if (break_q_sort(a, b, nelem, ASC))
		return ;
	var = init_var(a, nelem);
	while (++(var->i) < nelem)
	{
		if (traverse_a(a, nelem, var->two_third, var->i))
			break ;
		else if (a->head->value < var->one_third)
			var->push += pb(a, b);
		else
		{
			if (a->head->value < var->two_third)
				mid_part_a(a, b, var);
			else
				var->n_ra += ra(a);
		}
	}
	rr_or_r(a, b, var);
	three_divisions_a(a, b, nelem - var->push);
	three_divisions_b(a, b, var->n_rb);
	three_divisions_b(a, b, var->push - var->n_rb);
	free(var);
}
