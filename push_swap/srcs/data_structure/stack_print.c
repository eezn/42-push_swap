/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 23:06:52 by jin-lee           #+#    #+#             */
/*   Updated: 2021/06/26 04:02:32 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_a_stack(t_stack *stack)
{
	size_t	i;
	t_node	*now;
	char	*str;

	if (stack->count == 0)
	{
		ft_putstr_fd("=== A Stack : Stack is Empty.\n", STDOUT_FILENO);
		return ;
	}
	i = 0;
	now = stack->head;
	ft_putstr_fd("=== A Stack : ", STDOUT_FILENO);
	while (i++ < stack->count)
	{
		str = ft_itoa(now->value);
		ft_putstr_fd(str, STDOUT_FILENO);
		ft_putchar_fd(' ', STDOUT_FILENO);
		now = now->next;
		free(str);
	}
	nl();
}

void	print_b_stack(t_stack *stack)
{
	size_t	i;
	t_node	*now;
	char	*str;

	if (stack->count == 0)
	{
		ft_putstr_fd("=== B Stack : Stack is Empty.\n", STDOUT_FILENO);
		return ;
	}
	i = 0;
	now = stack->head;
	ft_putstr_fd("=== B Stack : ", STDOUT_FILENO);
	while (i++ < stack->count)
	{
		str = ft_itoa(now->value);
		ft_putstr_fd(str, STDOUT_FILENO);
		ft_putchar_fd(' ', STDOUT_FILENO);
		now = now->next;
		free(str);
	}
	nl();
}

void	print_stack(t_stack *a, t_stack *b)
{
	print_a_stack(a);
	print_b_stack(b);
	nl();
}
