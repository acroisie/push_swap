/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 08:06:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/25 09:38:14 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_smart_move(t_stack *a, int value)
{
	int	i;
	int	j;
	int	k;

	i = a->top_stack;
	j = 0;
	k = 0;
	while (a->stack[i] != value)
	{
		i--;
		j++;
	}
	while (a->stack[k] != value)
		k++;
	if (j <= k)
		while (a->stack[a->top_stack] != value)
			ft_rotate_a(a);
	else
		while (a->stack[a->top_stack] != value)
			ft_reverse_rotate_a(a);
}

void	ft_median(t_index *index, int quotient, int divider)
{
	// int	i;
	// int	j;
	// int	count;
	// int	*tab;

	// i = -1;
	// count = 0;
	// while (i++ < index->size)
	// 	if (index->index[i])
	// 		count++;
	// tab = malloc((count + 100) * sizeof(int)); // Malloc to protect
	// i = -1;
	// j = -1;
	// while (i++ < index->size)
	// 	if (index->index[i])
	// 		tab[j++] = (i + index->min_value);
	index->median = (index->index[(index->size * quotient) / divider]);
	// free(tab);
}

// void	ft_search_position(t_stack *a, t_index *index)
// {
// 	int	k;
// 	int	j;

// 	k = 0;
// 	while (k <= a->top_stack)
// 	{
// 		j = 0;
// 		while (j <= index->size)
// 		{
// 			if (a->stack[k] == (j + index->min_value))
// 			{
// 				index->index[j] = 1;
// 				break ;
// 			}
// 			j++;
// 		}
// 		k++;
// 	}
// }

void	ft_sort(t_stack *a, t_stack *b, t_index index)
{
	if (a->top_stack <= 100)
		ft_sort_hundred(a, b, index);
	if (a->top_stack > 100)
		ft_sort_fives_hundred(a, b, index);
}

void	ft_push_swap(t_stack *a, t_stack *b)
{
	t_index	index;

	ft_init_index(&index, a);
	// ft_search_position(a, &index);
	ft_sort(a, b, index);
	free(index.index);
}
