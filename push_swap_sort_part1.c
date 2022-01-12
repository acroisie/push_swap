/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 08:06:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/12 18:07:53 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_median(t_index *index)
{
	int	i;
	int	j;
	int	count;
	int	*tab;

	i = -1;
	count = 0;
	while (i++ <= index->size)
	{
		if (index->index[i])
			count++;
	}
	tab = malloc((count + 1) * sizeof(int));
	i = -1;
	j = 0;
	while (i++ <= index->size)
	{
		if (index->index[i])
		{
			tab[j] = (i + index->min_value);
			j++;
		}
	}
	index->median = (tab[j / 2]);
	free(tab);
}

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
	ft_median(index);
}

void	ft_sort(t_stack *a, t_stack *b, t_index index)
{
	ft_push_smaller(a, b, index);
	while (b->top_stack != -1)
		ft_return_from_chunk(a, b);
}

void	ft_push_swap(t_stack *a, t_stack *b)
{
	t_index	index;

	index.min_value = ft_min_value(a);
	index.max_value = ft_max_value(a);
	index.size = 0;
	ft_init_index(&index);
	ft_search_position(a, &index);
	ft_sort(a, b, index);
}
