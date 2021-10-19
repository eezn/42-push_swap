/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 03:25:26 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:45:23 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *dst, t_stack *src)
{
	stack_push(dst, stack_pop(src));
}

int	pa(t_stack *a, t_stack *b)
{
	if (b->count == 0)
		return (0);
	push(a, b);
	ft_putstr_fd("pa\n", STDOUT_FILENO);
	return (1);
}

int	pb(t_stack *a, t_stack *b)
{
	if (a->count == 0)
		return (0);
	push(b, a);
	ft_putstr_fd("pb\n", STDOUT_FILENO);
	return (1);
}
