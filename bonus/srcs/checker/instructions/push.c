/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 03:25:26 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:53:05 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push(t_stack *dst, t_stack *src)
{
	stack_push(dst, stack_pop(src));
}

int	pa(t_stack *a, t_stack *b)
{
	if (b->count == 0)
		return (0);
	push(a, b);
	return (1);
}

int	pb(t_stack *a, t_stack *b)
{
	if (a->count == 0)
		return (0);
	push(b, a);
	return (1);
}
