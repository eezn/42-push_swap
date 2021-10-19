/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 07:15:22 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/01 04:15:39 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	call_instr(t_stack *a, t_stack *b, char *instr, size_t len)
{
	if (!ft_strncmp(instr, "sa", len))
		sa(a);
	else if (!ft_strncmp(instr, "sb", len))
		sb(b);
	else if (!ft_strncmp(instr, "ss", len))
		ss(a, b);
	else if (!ft_strncmp(instr, "pa", len))
		pa(a, b);
	else if (!ft_strncmp(instr, "pb", len))
		pb(a, b);
	else if (!ft_strncmp(instr, "ra", len))
		ra(a);
	else if (!ft_strncmp(instr, "rb", len))
		rb(b);
	else if (!ft_strncmp(instr, "rr", len))
		rr(a, b);
	else if (!ft_strncmp(instr, "rra", len))
		rra(a);
	else if (!ft_strncmp(instr, "rrb", len))
		rrb(b);
	else if (!ft_strncmp(instr, "rrr", len))
		rrr(a, b);
}
