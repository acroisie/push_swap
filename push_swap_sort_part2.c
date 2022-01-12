/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:53:36 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/12 18:59:55 by acroisie         ###   ########lyon.fr   */
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

void	ft_push_greater(t_stack *a, t_stack *b, t_index index)
{
	int	j;

	j = a->top_stack;
	while (j >= 0)
	{
		if (a->stack[a->top_stack] > index.median)
			ft_push_b(a, b);
		else
			ft_rotate_a(a);
		j--;
	}
}

void	ft_return_from_chunk(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	min;
	int	max;

	i = b->top_stack;
	j = 0;
	min = ft_min_value(b);
	max = ft_max_value(b);
	while ((b->stack[i] != min) || (b->stack[i] != max))
		i--;
	while ((b->stack[i] != min) || (b->stack[i] != max))
		j++;
	if (i < j)
		while ((b->stack[i] != min) || (b->stack[i] != max))
			ft_rotate_b(b);
	else
		while ((b->stack[i] != min) || (b->stack[i] != max))
			ft_reverse_rotate_b(b);
	if (b->stack[b->top_stack] == max)
		ft_push_a(a, b);
	else
	{
		ft_push_a(a, b);
		ft_rotate_a(a);
	}
}
