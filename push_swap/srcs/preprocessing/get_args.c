/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 03:11:09 by jin-lee           #+#    #+#             */
/*   Updated: 2021/06/13 23:59:38 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_args(int argc, char **argv)
{
	int		i;
	char	**vec;
	char	**ret;

	i = 1;
	ret = NULL;
	while (i < argc)
	{
		vec = ft_split(argv[i++], ' ');
		if (!ret)
			ret = vec;
		else
			ret = ft_vecjoin(ret, vec);
	}
	return (ret);
}
