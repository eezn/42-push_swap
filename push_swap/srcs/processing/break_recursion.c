/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   break_recursion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 07:41:03 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:42:32 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	break_q_sort_a(t_stack *a, t_stack *b, int nelem)
{
	int	dummy;

	dummy = b->count;
	if (is_sorted(a, nelem, ASC))
		return (1);
	else if (nelem <= THRESHOLD)
	{
		if (nelem == 2)
			asc_two(a);
		if (nelem == 3)
		{
			if (a->count == 3)
				asc_three(a);
			else
				top_three_asc(a);
		}
		return (1);
	}
	else
		return (0);
}

static int	break_q_sort_b(t_stack *a, t_stack *b, int nelem)
{
	if (is_sorted(b, nelem, DESC))
	{
		while (nelem--)
			pa(a, b);
		return (1);
	}
	else if (nelem <= THRESHOLD)
	{
		if (nelem == 2)
			desc_two(b);
		if (nelem == 3)
		{
			if (b->count == 3)
				desc_three(b);
			else
				top_three_desc(b);
		}
		while (nelem--)
			pa(a, b);
		return (1);
	}
	else
		return (0);
}

int	break_q_sort(t_stack *a, t_stack *b, int nelem, int order)
{
	if (order == ASC)
		return (break_q_sort_a(a, b, nelem));
	else
		return (break_q_sort_b(a, b, nelem));
}
