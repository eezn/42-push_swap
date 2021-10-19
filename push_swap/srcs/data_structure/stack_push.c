/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 02:44:08 by jin-lee           #+#    #+#             */
/*   Updated: 2021/06/16 03:03:00 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_push(t_stack *stack, t_node *node)
{
	if (stack->count == 0)
	{
		node->next = node;
		node->prev = node;
		stack->head = node;
		stack->tail = node;
	}
	else
	{
		node->next = stack->head;
		node->prev = stack->tail;
		stack->head->prev = node;
		stack->tail->next = node;
		stack->head = node;
	}
	stack->count += 1;
}
