/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:34:33 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/26 13:57:35 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_smaller(t_stack *a, t_stack *b, t_index index)
{
	int	j;

	j = a->top_stack;
	while (j >= 0)
	{
		if (a->stack[a->top_stack] < index.median)
			ft_push_b(a, b);
		else
			ft_rotate_a(a);
		j--;
	}
}

void	ft_push_between(t_stack *a, t_stack *b, t_index index, int last_median)
{
	int	j;

	j = a->top_stack;
	while (j >= 0)
	{
		if (a->stack[a->top_stack] >= last_median
			&& a->stack[a->top_stack] < index.median)
			ft_push_b(a, b);
		else
			ft_rotate_a(a);
		j--;
	}
}

void	ft_push_greater(t_stack *a, t_stack *b, t_index index)
{
	int	j;

	j = a->top_stack;
	while (j >= 0)
	{
		if (a->stack[a->top_stack] >= index.median)
		{
			ft_push_b(a, b);
			ft_reverse_rotate_a(a);
		}
		else
			ft_reverse_rotate_a(a);
		j--;
	}
}

void	ft_sort_five(t_stack *a, t_stack *b, t_index *index)
{
	ft_push_b(a, b);
	ft_push_b(a, b);
	index->min_value = ft_min_value(a);
	index->max_value = ft_max_value(a);
	ft_sort_three(a, *index);
	while (b->top_stack != -1)
	{
		if (b->stack[b->top_stack] < a->stack[a->top_stack])
			ft_push_a(a, b);
		else if (b->stack[b->top_stack] > a->stack[0])
		{
			ft_push_a(a, b);
			ft_rotate_a(a);
		}
		else if (b->stack[b->top_stack] > a->stack[a->top_stack]
			&& b->stack[b->top_stack] < a->stack[a->top_stack - 1])
		{
			ft_push_a(a, b);
			ft_swap_a(a);
		}
		else if (a->top_stack == 3 && b->stack[b->top_stack] > a->stack[2]
			&& b->stack[b->top_stack] < a->stack[1])
		{
			ft_rotate_a(a);
			ft_push_a(a, b);
			ft_swap_a(a);
			ft_reverse_rotate_a(a);
		}
		else
		{
			ft_reverse_rotate_a(a);
			ft_push_a(a, b);
			ft_rotate_a(a);
			ft_rotate_a(a);
		}
	}
}
