/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_tail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 23:37:18 by jin-lee           #+#    #+#             */
/*   Updated: 2021/06/26 04:00:18 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	list_add_tail(t_stack *stack, int value)
{
	t_node		*prev_node;
	t_node		*curr_node;
	t_node		*next_node;

	curr_node = list_new_node(value);
	if (stack->count == 0)
	{
		curr_node->next = curr_node;
		curr_node->prev = curr_node;
		stack->head = curr_node;
		stack->tail = curr_node;
		stack->count += 1;
	}
	else
	{
		prev_node = stack->tail;
		next_node = stack->head;
		curr_node->next = next_node;
		curr_node->prev = prev_node;
		prev_node->next = curr_node;
		next_node->prev = curr_node;
		stack->tail = curr_node;
		stack->count += 1;
	}
}
