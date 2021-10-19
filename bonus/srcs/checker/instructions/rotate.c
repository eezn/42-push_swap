/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 03:43:28 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:53:01 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate(t_stack *stack, int reverse)
{
	if (reverse == FALSE)
	{
		stack->tail = stack->head;
		stack->head = stack->head->next;
	}
	if (reverse == TRUE)
	{
		stack->head = stack->tail;
		stack->tail = stack->tail->prev;
	}
}

int	ra(t_stack *a)
{
	if (a->count == 0)
		return (0);
	else if (a->count == 1)
		return (1);
	rotate(a, FALSE);
	return (1);
}

int	rb(t_stack *b)
{
	if (b->count == 0)
		return (0);
	else if (b->count == 1)
		return (1);
	rotate(b, FALSE);
	return (1);
}

int	rr(t_stack *a, t_stack *b)
{
	if (a->count > 1 && b->count > 1)
	{
		rotate(a, FALSE);
		rotate(b, FALSE);
		return (1);
	}
	if (a->count > 1)
		return (ra(a));
	if (b->count > 1)
		return (rb(b));
	return (0);
}
