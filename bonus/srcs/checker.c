/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 06:20:48 by jin-lee           #+#    #+#             */
/*   Updated: 2021/06/26 03:51:04 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	checker(t_stack *a, t_stack *b)
{
	char	*instr;
	size_t	instr_len;
	size_t	count_a;

	count_a = a->count;
	while (1)
	{
		if (!get_next_line(STDIN_FILENO, &instr))
			break ;
		instr_len = ft_strlen(instr);
		if (is_valid_instr(instr, instr_len))
			print_error("Error: Invalid instruction");
		call_instr(a, b, instr, instr_len);
		free(instr);
	}
	free(instr);
	if (is_sorted(a, count_a, ASC))
		ft_putstr_fd("OK\n", STDOUT_FILENO);
	else
		ft_putstr_fd("KO\n", STDOUT_FILENO);
}
