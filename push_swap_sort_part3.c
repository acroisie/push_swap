/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:36:48 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/25 10:12:08 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	ft_abs(int value)
// {
// 	if (value < 0)
// 		return (value = value * -1);
// 	return (value);
// }

// void	ft_range(t_index *index)
// {
// 	int	range;

// 	range = 0;
// 	if (index->max_value > 0 && index->min_value < 0)
// 	{
// 		range = index->max_value + ft_abs(index->min_value);
// 		index->size = range;
// 		return ;
// 	}
// 	range = ft_abs(ft_abs(index->max_value) - ft_abs(index->min_value));
// 	index->size = range;
// 	return ;
// }

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
	int	mem;

	i = 0;
	mem = index->min_value;
	while (i < index->size)
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

void	*ft_init_index(t_index *index, t_stack *a)
{
	int	j;

	j = 0;
	index->min_value = ft_min_value(a);
	index->max_value = ft_max_value(a);
	index->size = a->top_stack;
	index->index = malloc((index->size + 1) * sizeof(int));
	if (index->index == NULL)
		return (NULL);
	while (j <= index->size)
	{
		index->index[j] = a->stack[j];
		j++;
	}
	ft_bubble_sort(index);
	return (index->index);
	// ft_range(index);
	// index->index = malloc((ft_abs(index->size) + 1) * sizeof(int));
	// j = 0;
	// while (j <= index->size)
	// {
	// 	index->index[j] = 0;
	// 	j++;
	// }
}
