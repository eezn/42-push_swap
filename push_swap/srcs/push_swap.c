/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 00:51:44 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:48:17 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	short_cut(t_stack *a, t_stack *b)
{
	if (a->count == 2)
		asc_two(a);
	if (a->count == 3)
		asc_three(a);
	if (a->count == 4)
		asc_four(a, b);
	if (a->count == 5)
		asc_five(a, b);
}

static void	three_divisions(t_stack *a, t_stack *b, int nelem)
{
	three_divisions_a(a, b, nelem);
}

void	push_swap(t_stack *a, t_stack *b)
{
	if (is_sorted(a, a->count, ASC))
		return ;
	if (a->count <= 5)
		short_cut(a, b);
	else
		three_divisions(a, b, a->count);
}
