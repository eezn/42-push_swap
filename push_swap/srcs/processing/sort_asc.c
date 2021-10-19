/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_asc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 00:21:38 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/01 16:13:32 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	asc_two(t_stack *a)
{
	if (a->head->value > a->head->next->value)
		sa(a);
}

void	asc_three(t_stack *a)
{
	if (a->head->value < a->head->next->value && \
	a->head->value < a->tail->value && a->head->next->value > a->tail->value)
	{
		rra(a);
		sa(a);
	}
	if (a->head->value > a->head->next->value && \
	a->head->value < a->tail->value && a->head->next->value < a->tail->value)
		sa(a);
	if (a->head->value < a->head->next->value && \
	a->head->value > a->tail->value && a->head->next->value > a->tail->value)
		rra(a);
	if (a->head->value > a->head->next->value && \
	a->head->value > a->tail->value && a->head->next->value < a->tail->value)
		ra(a);
	if (a->head->value > a->head->next->value && \
	a->head->value > a->tail->value && a->head->next->value > a->tail->value)
	{
		sa(a);
		rra(a);
	}
}

void	asc_four(t_stack *a, t_stack *b)
{
	int		i;
	int		pivot;

	if (is_sorted(a, a->count, ASC))
		return ;
	i = 0;
	pivot = get_partition(a, 4, MEDIAN);
	while (i++ < 4)
	{
		if (a->count == 2)
			break ;
		if (a->head->value < pivot)
			pb(a, b);
		else
			ra(a);
	}
	asc_two(a);
	desc_two(b);
	pa(a, b);
	pa(a, b);
}

void	asc_five(t_stack *a, t_stack *b)
{
	int		i;
	int		pivot;

	if (is_sorted(a, a->count, ASC))
		return ;
	i = 0;
	pivot = get_partition(a, 5, MEDIAN);
	while (i++ < 5)
	{
		if (a->count == 3)
			break ;
		if (a->head->value < pivot)
			pb(a, b);
		else
			ra(a);
	}
	asc_three(a);
	desc_two(b);
	pa(a, b);
	pa(a, b);
}
