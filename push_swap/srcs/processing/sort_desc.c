/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_desc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 18:01:05 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/01 16:13:46 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	desc_two(t_stack *b)
{
	if (b->head->value < b->head->next->value)
		sb(b);
}

void	desc_three(t_stack *b)
{
	if (b->head->value < b->head->next->value && \
	b->head->value < b->tail->value && b->head->next->value < b->tail->value)
	{
		sb(b);
		rrb(b);
	}
	if (b->head->value < b->head->next->value && \
	b->head->value < b->tail->value && b->head->next->value > b->tail->value)
		rb(b);
	if (b->head->value > b->head->next->value && \
	b->head->value < b->tail->value && b->head->next->value < b->tail->value)
		rrb(b);
	if (b->head->value < b->head->next->value && \
	b->head->value > b->tail->value && b->head->next->value > b->tail->value)
		sb(b);
	if (b->head->value > b->head->next->value && \
	b->head->value > b->tail->value && b->head->next->value < b->tail->value)
	{
		rrb(b);
		sb(b);
	}
}

void	desc_four(t_stack *a, t_stack *b)
{
	int		i;
	int		pivot;

	if (is_sorted(b, b->count, DESC))
		return ;
	i = 0;
	pivot = get_partition(b, 4, MEDIAN);
	while (i++ < 4)
	{
		if (b->count == 2)
			break ;
		if (b->head->value >= pivot)
			pa(a, b);
		else
			rb(b);
	}
	asc_two(a);
	desc_two(b);
	pb(a, b);
	pb(a, b);
}

void	desc_five(t_stack *a, t_stack *b)
{
	int		i;
	int		pivot;

	if (is_sorted(b, b->count, DESC))
		return ;
	i = 0;
	pivot = get_partition(b, 5, MEDIAN);
	while (i++ < 5)
	{
		if (b->count == 3)
			break ;
		if (b->head->value > pivot)
			pa(a, b);
		else
			rb(b);
	}
	desc_three(b);
	asc_two(a);
	pb(a, b);
	pb(a, b);
}
