/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_partitions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 05:29:51 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/05 18:44:52 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	insertion_sort(int *arr, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (++i < size)
	{
		tmp = arr[i];
		j = i;
		while (j > 0 && arr[j - 1] > tmp)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = tmp;
	}
}

int	get_partition(t_stack *stack, int nelem, int position)
{
	int		i;
	int		ret;
	int		*arr;
	t_node	*curr;

	i = -1;
	curr = stack->head;
	arr = ft_calloc(nelem, sizeof(int));
	while (++i < nelem)
	{
		arr[i] = curr->value;
		curr = curr->next;
	}
	insertion_sort(arr, nelem);
	if (position == ONE_THIRD)
		ret = arr[(nelem / 3)];
	if (position == TWO_THIRD)
		ret = arr[(nelem / 3)*2];
	if (position == MEDIAN)
		ret = arr[nelem / 2];
	free(arr);
	return (ret);
}
