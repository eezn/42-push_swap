/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_or_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 01:49:54 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:45:59 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rr_or_r_a(t_stack *a, int n_ra)
{
	int		n_rra;

	n_rra = a->count - n_ra;
	if (n_ra < n_rra || n_rra < 0)
		while (n_ra--)
			rra(a);
	else
		while (n_rra--)
			ra(a);
}

static void	rr_or_r_b(t_stack *b, int n_rb)
{
	int		n_rrb;

	n_rrb = b->count - n_rb;
	if (n_rb < n_rrb || n_rrb < 0)
		while (n_rb--)
			rrb(b);
	else
		while (n_rrb--)
			rb(b);
}

void	rr_or_r(t_stack *a, t_stack *b, t_var *var)
{
	int		n_ra;
	int		n_rb;

	n_ra = var->n_ra;
	n_rb = var->n_rb;
	while (n_ra && n_rb)
	{
		rrr(a, b);
		n_ra--;
		n_rb--;
	}
	rr_or_r_b(b, n_rb);
	rr_or_r_a(a, n_ra);
}
