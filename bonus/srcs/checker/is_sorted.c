/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 02:25:45 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:52:33 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	is_sorted_asc(t_stack *stack, int nelem)
{
	t_node	*curr;
	int		min;
	int		count;

	count = 0;
	min = INT32_MIN;
	curr = stack->head;
	if (curr->value == min)
	{
		curr = curr->next;
		count++;
	}
	while (curr->value > min)
	{
		min = curr->value;
		curr = curr->next;
		count++;
	}
	if (nelem == count)
		return (1);
	return (0);
}

static int	is_sorted_desc(t_stack *stack, int nelem)
{
	t_node	*curr;
	int		max;
	int		count;

	count = 0;
	max = INT32_MAX;
	curr = stack->head;
	if (curr->value == max)
	{
		curr = curr->next;
		count++;
	}
	while (curr->value < max)
	{
		max = curr->value;
		curr = curr->next;
		count++;
	}
	if (nelem == count)
		return (1);
	return (0);
}

int	is_sorted(t_stack *stack, int nelem, int order)
{
	if (order == ASC)
		return (is_sorted_asc(stack, nelem));
	else
		return (is_sorted_desc(stack, nelem));
}
