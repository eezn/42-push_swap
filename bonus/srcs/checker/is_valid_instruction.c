/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_instruction.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 06:38:21 by jin-lee           #+#    #+#             */
/*   Updated: 2021/06/24 08:43:16 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	is_valid_instr(char *instr, size_t len)
{
	if (!ft_strncmp(instr, "sa", len) && len == 2)
		return (0);
	if (!ft_strncmp(instr, "sb", len) && len == 2)
		return (0);
	if (!ft_strncmp(instr, "ss", len) && len == 2)
		return (0);
	if (!ft_strncmp(instr, "pa", len) && len == 2)
		return (0);
	if (!ft_strncmp(instr, "pb", len) && len == 2)
		return (0);
	if (!ft_strncmp(instr, "ra", len) && len == 2)
		return (0);
	if (!ft_strncmp(instr, "rb", len) && len == 2)
		return (0);
	if (!ft_strncmp(instr, "rr", len) && len == 2)
		return (0);
	if (!ft_strncmp(instr, "rra", len) && len == 3)
		return (0);
	if (!ft_strncmp(instr, "rrb", len) && len == 3)
		return (0);
	if (!ft_strncmp(instr, "rrr", len) && len == 3)
		return (0);
	return (1);
}
