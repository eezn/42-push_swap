/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:11:38 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:52:11 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	check_is_int(char **args, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	i_len;

	i = 0;
	while (i < len)
	{
		i_len = ft_strlen(args[i]);
		j = 0;
		if (args[i][0] == '-')
			j++;
		while (j < i_len)
			if (!ft_isdigit(args[i][j++]))
				return (1);
		i++;
	}
	return (0);
}

static int	check_in_range(char **args, size_t len)
{
	size_t		i;
	size_t		digit_len;
	long long	tmp;

	i = 0;
	while (i < len)
	{
		if (args[i][0] == '-')
			digit_len = ft_strlen(&args[i][1]);
		else
			digit_len = ft_strlen(args[i]);
		if (digit_len < 11)
		{
			tmp = ft_atoll(args[i]);
			if (!(INT32_MIN <= tmp && tmp <= INT32_MAX))
				return (1);
		}
		else
			return (1);
		i++;
	}
	return (0);
}

static int	check_is_dup(char **args, size_t len)
{
	size_t	i;
	size_t	j;
	int		i_len;
	int		j_len;

	i = 0;
	while (i < len)
	{
		j = 0;
		i_len = ft_strlen(args[i]);
		while (j < len)
		{
			j_len = ft_strlen(args[j]);
			if (i != j && i_len == j_len)
				if (!ft_strncmp(args[i], args[j], i_len))
					return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	check_args(char **args)
{
	size_t	len;

	len = ft_veclen(args);
	if (len == 0)
		print_error("Error: No input value!");
	if (check_is_int(args, len))
		print_error("Error: Some arguments aren’t integers!");
	if (check_in_range(args, len))
		print_error("Error: Some arguments are bigger than an integer!");
	if (check_is_dup(args, len))
		print_error("Error: Some arguments are duplicated!");
}
