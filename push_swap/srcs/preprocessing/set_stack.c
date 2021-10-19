/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 03:38:42 by jin-lee           #+#    #+#             */
/*   Updated: 2021/06/26 03:22:16 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*set_stack(char **args, int flag)
{
	t_stack		*stack;
	size_t		len;
	size_t		i;

	stack = stack_init();
	if (flag == TRUE)
	{
		i = 0;
		len = ft_veclen(args);
		while (i < len)
			list_add_tail(stack, ft_atoi(args[i++]));
	}
	return (stack);
}
