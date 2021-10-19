/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_structure.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 01:02:08 by jin-lee           #+#    #+#             */
/*   Updated: 2021/07/01 16:16:54 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_STRUCTURE_H
# define DATA_STRUCTURE_H

# include "checker.h"

typedef struct s_stack	t_stack;
typedef struct s_node	t_node;

struct	s_stack
{
	t_node		*head;
	t_node		*tail;
	size_t		count;
};

struct	s_node
{
	int			value;
	t_node		*next;
	t_node		*prev;
};

/*
**Linked list
*/
t_node	*list_new_node(int value);
void	list_add_tail(t_stack *stack, int value);

/*
**Stack
*/
t_stack	*stack_init(void);
void	stack_push(t_stack *stack, t_node *node);
t_node	*stack_pop(t_stack *stack);

#endif
