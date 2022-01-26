/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:53:36 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/26 10:47:08 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack *a, t_index index)
{
	if ((a->stack[0] == index.max_value) && (a->stack[1] == index.min_value))
		ft_swap_a(a);
	if ((a->stack[2] == index.max_value) && (a->stack[0] == index.min_value))
	{
		ft_swap_a(a);
		ft_reverse_rotate_a(a);
	}
	if ((a->stack[2] == index.max_value) && (a->stack[1] == index.min_value))
		ft_rotate_a(a);
	if ((a->stack[1] == index.max_value) && (a->stack[2] == index.min_value))
	{
		ft_swap_a(a);
		ft_rotate_a(a);
	}
	if ((a->stack[1] == index.max_value) && (a->stack[0] == index.min_value))
		ft_reverse_rotate_a(a);
}

void	ft_sort_hundred(t_stack *a, t_stack *b, t_index index)
{
	ft_median(&index, 1, 2);
	ft_push_smaller(a, b, index);
	while (b->top_stack != -1)
		ft_return_from_chunk(a, b);
	ft_smart_move(a, index.min_value);
	ft_push_greater(a, b, index);
	while (b->top_stack != -1)
		ft_return_from_chunk(a, b);
	ft_smart_move(a, index.min_value);
}

void	ft_sort_fives_hundred(t_stack *a, t_stack *b, t_index index)
{
	t_median	median;

	median.quotient = 1;
	median.divider = 5;
	ft_median(&index, median.quotient, median.divider);
	ft_push_between(a, b, index, index.min_value);
	while (b->top_stack != -1)
		ft_return_from_chunk(a, b);
	while (median.quotient < (median.divider - 1))
	{
		median.last_median = index.median;
		median.quotient++;
		ft_median(&index, median.quotient, median.divider);
		ft_push_between(a, b, index, median.last_median);
		ft_smart_move(a, index.min_value);
		while (b->top_stack != -1)
			ft_return_from_chunk(a, b);
	}
	ft_median(&index, median.quotient, median.divider);
	ft_push_greater(a, b, index);
	ft_smart_move(a, index.min_value);
	while (b->top_stack != -1)
		ft_return_from_chunk(a, b);
	ft_smart_move(a, index.min_value);
}

void	ft_chunck_init(t_chunck *chunck, t_stack *b)
{
	chunck->i = b->top_stack;
	chunck->j = 0;
	chunck->k = 0;
	chunck->min = ft_min_value(b);
	chunck->max = ft_max_value(b);
}

void	ft_return_from_chunk(t_stack *a, t_stack *b)
{
	t_chunck	ch;

	ft_chunck_init(&ch, b);
	while (!((b->stack[ch.i] == ch.min) || (b->stack[ch.i] == ch.max)))
	{
		ch.i--;
		ch.k++;
	}
	while (!((b->stack[ch.j] == ch.min) || (b->stack[ch.j] == ch.max)))
		ch.j++;
	if (ch.k < ch.j)
		while (!((b->stack[b->top_stack] == ch.min)
				|| (b->stack[b->top_stack] == ch.max)))
			ft_rotate_b(b);
	else
		while (!((b->stack[b->top_stack] == ch.min)
				|| (b->stack[b->top_stack] == ch.max)))
			ft_reverse_rotate_b(b);
	if (b->stack[b->top_stack] == ch.max)
		ft_push_a(a, b);
	else
	{
		ft_push_a(a, b);
		ft_rotate_a(a);
	}
}
