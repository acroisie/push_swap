/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:34:33 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/24 08:33:04 by acroisie         ###   ########lyon.fr   */
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
		if (a->stack[a->top_stack] > last_median
			&& a->stack[a->top_stack] <= index.median)
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
			ft_reverse_rotate_a(a);
		j--;
	}
}
