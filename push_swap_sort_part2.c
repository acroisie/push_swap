/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:53:36 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/13 11:27:25 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_chunck_init(t_chunck *chunck, t_stack *b)
{
	chunck->i = b->top_stack;
	chunck->j = 0;
	chunck->k = 0;
	chunck->min = ft_min_value(b);
	chunck->max = ft_max_value(b);
}

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

void	ft_push_greater(t_stack *a, t_stack *b, t_index index)
{
	int	j;

	j = a->top_stack;
	while (j >= 0)
	{
		if (a->stack[a->top_stack] >= index.median)
			ft_push_b(a, b);
		else
			ft_rotate_a(a);
		j--;
	}
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
