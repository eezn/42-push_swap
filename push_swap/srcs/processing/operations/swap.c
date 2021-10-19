/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:11:56 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:45:47 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_stack *stack)
{
	t_node	*one;
	t_node	*two;

	if (stack->count < 2)
		return (0);
	if (stack->count == 2)
		rotate(stack, FALSE);
	else
	{
		one = stack->head;
		two = stack->head->next;
		one->next = two->next;
		one->prev = two;
		two->next = one;
		two->prev = stack->tail;
		stack->tail->next = two;
		if (stack->count == 3)
			stack->tail->prev = one;
		stack->head = two;
	}
	return (1);
}

int	sa(t_stack *a)
{
	if (swap(a))
	{
		ft_putstr_fd("sa\n", STDOUT_FILENO);
		return (1);
	}
	return (0);
}

int	sb(t_stack *b)
{
	if (swap(b))
	{
		ft_putstr_fd("sb\n", STDOUT_FILENO);
		return (1);
	}
	return (0);
}

int	ss(t_stack *a, t_stack *b)
{
	if (a->count > 1 && b->count > 1)
	{
		swap(a);
		swap(b);
		ft_putstr_fd("ss\n", STDOUT_FILENO);
		return (1);
	}
	if (a->count > 1)
		return (sa(a));
	if (b->count > 1)
		return (sb(b));
	return (0);
}
