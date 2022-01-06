/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 08:06:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/06 10:11:51 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_search_position(t_stack *a, t_index *index)
{
	int	k;
	int	j;

	k = 0;
	while (k <= a->top_stack)
	{
		j = 0;
		while (j <= index->size)
		{
			if (a->stack[k] == (j + index->min_value))
			{
				index->index[j] = 1;
				break ;
			}
			j++;
		}
		k++;
	}
}

void	ft_move_value(int j, t_index index, t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while ((a->stack[a->top_stack] != (j + (index.min_value))))
	{
		if (j > (index.size / 2))
			ft_rotate_a(a);
		else
			ft_reverse_rotate_a(a);
	}
	ft_push_b(a, b);
}

void	ft_read_and_sort(t_stack *a, t_stack *b, t_index index)
{
	int	j;

	j = 0;
	while (j <= index.size)
	{
		if (index.index[j] == 1)
		{
			ft_move_value(j, index, a, b);
		}
		j++;
	}
	while (b->top_stack != -1)
	{
		ft_push_a(a, b);
	}
}

void	ft_sort(t_stack *a, t_stack *b)
{
	t_index	index;

	index.min_value = ft_min_value(a);
	index.max_value = ft_max_value(a);
	index.size = 0;
	ft_init_index(&index);
	ft_search_position(a, &index);
	ft_read_and_sort(a, b, index);
}
