/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 03:55:26 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:52:52 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	rra(t_stack *a)
{
	if (a->count == 0)
		return (0);
	else if (a->count == 1)
		return (1);
	rotate(a, TRUE);
	return (1);
}

int	rrb(t_stack *b)
{
	if (b->count == 0)
		return (0);
	else if (b->count == 1)
		return (1);
	rotate(b, TRUE);
	return (1);
}

int	rrr(t_stack *a, t_stack *b)
{
	if (a->count > 1 && b->count > 1)
	{
		rotate(a, TRUE);
		rotate(b, TRUE);
		return (1);
	}
	if (a->count > 1)
		return (rra(a));
	if (b->count > 1)
		return (rrb(b));
	return (0);
}
