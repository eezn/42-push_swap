/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_divisions_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 07:58:51 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:47:55 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_var	*init_var(t_stack *stack, int nelem)
{
	t_var	*ret;

	ret = (t_var *)malloc(sizeof(t_var));
	ret->i = -1;
	ret->push = 0;
	ret->n_ra = 0;
	ret->n_rb = 0;
	ret->one_third = get_partition(stack, nelem, ONE_THIRD);
	ret->two_third = get_partition(stack, nelem, TWO_THIRD);
	return (ret);
}

int	traverse_a(t_stack *a, int nelem, int pivot, int p)
{
	t_node	*curr;

	curr = a->head;
	while (p++ < nelem)
	{
		if (curr->value >= pivot)
			curr = curr->next;
		else
			return (0);
	}
	return (1);
}

int	traverse_b(t_stack *b, int nelem, int pivot, int p)
{
	t_node	*curr;

	curr = b->head;
	while (p++ < nelem)
	{
		if (curr->value <= pivot)
			curr = curr->next;
		else
			return (0);
	}
	return (1);
}
