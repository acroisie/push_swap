/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:36:48 by acroisie          #+#    #+#             */
/*   Updated: 2022/04/30 15:23:21 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_index(t_index *index, int j)
{
	int	temp;

	temp = index->index[j];
	index->index[j] = index->index[j + 1];
	index->index[j + 1] = temp;
}

void	ft_bubble_sort(t_index *index)
{
	int	i;
	int	j;

	i = 0;
	while (i <= index->size)
	{
		j = 0;
		while (j < index->size)
		{
			if (index->index[j + 1] < index->index[j])
				ft_swap_index(index, j);
			j++;
		}
		i++;
	}
}

int	ft_min_value(t_stack *a)
{
	int	i;
	int	min_value;

	i = 0;
	min_value = a->stack[0];
	while (i <= (a->top_stack))
	{
		if ((a->stack[i]) < min_value)
			min_value = a->stack[i];
		i++;
	}
	return (min_value);
}

int	ft_max_value(t_stack *a)
{
	int	i;
	int	max_value;

	i = 0;
	max_value = a->stack[0];
	while (i <= (a->top_stack))
	{
		if ((a->stack[i]) > max_value)
			max_value = a->stack[i];
		i++;
	}
	return (max_value);
}

void	*ft_init_index(t_index *index, t_stack *a, t_stack *b)
{
	int	j;

	j = 0;
	index->min_value = ft_min_value(a);
	index->max_value = ft_max_value(a);
	index->size = a->top_stack;
	index->index = malloc((index->size + 1) * sizeof(int));
	if (!index->index)
	{
		free(a);
		free(b);
		exit (0);
	}
	while (j <= index->size)
	{
		index->index[j] = a->stack[j];
		j++;
	}
	ft_bubble_sort(index);
	return (index->index);
}
