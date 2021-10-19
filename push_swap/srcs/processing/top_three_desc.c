/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_three_desc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:11:14 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:48:08 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	three_rrr(t_stack *b)
{
	sb(b);
	rb(b);
	sb(b);
	rrb(b);
	sb(b);
}

static void	three_rrl(t_stack *b)
{
	sb(b);
	rb(b);
	sb(b);
	rrb(b);
}

static void	three_lrr(t_stack *b)
{
	rb(b);
	sb(b);
	rrb(b);
	sb(b);
}

static void	three_llr(t_stack *b)
{
	rb(b);
	sb(b);
	rrb(b);
}

void	top_three_desc(t_stack *b)
{
	int	e1;
	int	e2;
	int	e3;

	e1 = b->head->value;
	e2 = b->head->next->value;
	e3 = b->head->next->next->value;
	if (e1 < e2 && e1 < e3 && e2 < e3)
		three_rrr(b);
	if (e1 < e2 && e1 < e3 && e2 > e3)
		three_rrl(b);
	if (e1 > e2 && e1 < e3 && e2 < e3)
		three_lrr(b);
	if (e1 < e2 && e1 > e3 && e2 > e3)
		sb(b);
	if (e1 > e2 && e1 > e3 && e2 < e3)
		three_llr(b);
}
