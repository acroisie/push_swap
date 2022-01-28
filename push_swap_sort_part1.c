/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 08:06:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/27 17:29:07 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_already_sort(t_stack *a, t_index *index)
{
	int	i;
	int	j;
	int	k;

	i = a->top_stack;
	j = 0;
	k = 0;
	while (i > 0)
	{
		if (a->stack[i] == index->index[j])
			k++;
		i--;
		j++;
	}
	if (k == a->top_stack)
	{
		exit (0);
	}
}

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
	index->median = (index->index[(index->size * quotient) / divider]);
}

void	ft_sort(t_stack *a, t_stack *b, t_index index)
{
	if (a->top_stack < 2)
		ft_sort_two(a);
	else if (a->top_stack < 3)
		ft_sort_three(a, index);
	else if (a->top_stack < 5)
		ft_sort_five(a, b, &index);
	else if (a->top_stack < 100)
		ft_sort_hundred(a, b, index);
	else if (a->top_stack >= 100)
		ft_sort_fives_hundred(a, b, index);
}

void	ft_push_swap(t_stack *a, t_stack *b)
{
	t_index	index;

	ft_init_index(&index, a, b);
	ft_check_already_sort(a, &index);
	ft_sort(a, b, index);
	free(index.index);
}
