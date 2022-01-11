/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:36:48 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/11 18:25:04 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(int value)
{
	if (value < 0)
		return (value = value * -1);
	return (value);
}

void	ft_range(t_index *index)
{
	int	range;

	range = 0;
	if (index->max_value > 0 && index->min_value < 0)
	{
		range = index->max_value + ft_abs(index->min_value);
		index->size = range;
		return ;
	}
	range = ft_abs(ft_abs(index->max_value) - ft_abs(index->min_value));
	index->size = range;
	return ;
}

int	ft_min_value(t_stack *a)
{
	int	i;
	int	min_value;

	i = 0;
	min_value = a->stack[0];
	while (i < (a->top_stack))
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
	while (i < (a->top_stack))
	{
		if ((a->stack[i]) > max_value)
			max_value = a->stack[i];
		i++;
	}
	return (max_value);
}

void	ft_init_index(t_index *index)
{
	int	j;

	ft_range(index);
	index->index = malloc((ft_abs(index->size) + 1) * sizeof(int));
	j = 0;
	while (j <= index->size)
	{
		index->index[j] = 0;
		j++;
	}
}
