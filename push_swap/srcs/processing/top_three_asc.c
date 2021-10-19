/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_three_asc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:11:54 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:48:02 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	three_rrl(t_stack *a)
{
	ra(a);
	sa(a);
	rra(a);
}

static void	three_rll(t_stack *a)
{
	ra(a);
	sa(a);
	rra(a);
	sa(a);
}

static void	three_llr(t_stack *a)
{
	sa(a);
	ra(a);
	sa(a);
	rra(a);
}

static void	three_lll(t_stack *a)
{
	sa(a);
	ra(a);
	sa(a);
	rra(a);
	sa(a);
}

void	top_three_asc(t_stack *a)
{
	int	e1;
	int	e2;
	int	e3;

	e1 = a->head->value;
	e2 = a->head->next->value;
	e3 = a->head->next->next->value;
	if (e1 < e2 && e1 < e3 && e2 > e3)
		three_rrl(a);
	if (e1 > e2 && e1 < e3 && e2 < e3)
		sa(a);
	if (e1 < e2 && e1 > e3 && e2 > e3)
		three_rll(a);
	if (e1 > e2 && e1 > e3 && e2 < e3)
		three_llr(a);
	if (e1 > e2 && e1 > e3 && e2 > e3)
		three_lll(a);
}
