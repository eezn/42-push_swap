/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 02:43:53 by jin-lee           #+#    #+#             */
/*   Updated: 2021/06/26 04:00:11 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_node	*stack_pop(t_stack *stack)
{
	t_node	*ret;

	if (stack->count == 0)
		print_error("Error: Stack is Empty!");
	ret = stack->head;
	stack->tail->next = stack->head->next;
	stack->head->next->prev = stack->tail;
	stack->head = stack->head->next;
	stack->count -= 1;
	if (stack->count == 0)
	{
		stack->head = NULL;
		stack->tail = NULL;
	}
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}
