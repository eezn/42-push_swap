/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 04:56:55 by jin-lee           #+#    #+#             */
/*   Updated: 2021/06/26 03:51:24 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	checker(a, b);
	return (0);
}
