/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 01:01:58 by jin-lee           #+#    #+#             */
/*   Updated: 2021/06/26 04:22:24 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char		**args;
	t_stack		*a;
	t_stack		*b;

	if (argc < 2)
		return (0);
	args = get_args(argc, argv);
	check_args(args);
	a = set_stack(args, TRUE);
	b = set_stack(args, FALSE);
	push_swap(a, b);
	return (0);
}
