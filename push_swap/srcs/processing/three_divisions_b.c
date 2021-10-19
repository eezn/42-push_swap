/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_divisions_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 06:32:57 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:47:22 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	mid_part_b(t_stack *a, t_stack *b, t_var *var)
{
	var->push += pa(a, b);
	if (b->head->value <= var->one_third)
	{
		rr(a, b);
		(var->n_ra)++;
		(var->n_rb)++;
		(var->i)++;
	}
	else
		var->n_ra += ra(a);
}

void	three_divisions_b(t_stack *a, t_stack *b, int nelem)
{
	t_var	*var;

	if (break_q_sort(a, b, nelem, DESC))
		return ;
	var = init_var(b, nelem);
	while (++(var->i) < nelem)
	{
		if (traverse_b(b, nelem, var->one_third, var->i))
			break ;
		else if (b->head->value > var->two_third)
			var->push += pa(a, b);
		else
		{
			if (b->head->value > var->one_third)
				mid_part_b(a, b, var);
			else
				var->n_rb += rb(b);
		}
	}
	three_divisions_a(a, b, var->push - var->n_ra);
	rr_or_r(a, b, var);
	three_divisions_a(a, b, var->n_ra);
	three_divisions_b(a, b, nelem - var->push);
	free(var);
}
