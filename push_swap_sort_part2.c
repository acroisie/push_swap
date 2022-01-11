/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:53:36 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/11 13:51:08 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_max_range(t_stack *a, t_stack *b, t_index index)
{
	int	ref;
	int	end;

	ref = a->stack[index.start_pos];
	end = a->stack[index.end_pos];
	while (a->stack[a->top_stack] != ref)
	{
		ft_push_b(a, b);
	}
	while (a->stack[a->top_stack] != end)
	{
		ft_rotate_a(a);
		if (ref < a->stack[a->top_stack])
		{
			ref = a->stack[a->top_stack];
			ft_rotate_a(a);
		}
		else
			ft_push_b(a, b);
	}
	ft_rotate_a(a);
	while (a->stack[a->top_stack] != index.start_pos)
	{
		ft_push_b(a, b);
	}
}
