/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:36:48 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/04 17:56:37 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(int value)
{
	if (value < 0)
		return (value = value * -1);
	return (value);
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

int	*ft_init_index(int min_value, int max_value, int *size)
{
	int	*index;
	int	j;

	size = ft_abs(ft_abs(max_value) - ft_abs(min_value));
	index = malloc((ft_abs(size) + 1) * sizeof(int));
	j = 0;
	while (j < size)
	{
		index[j] = 0;
		j++;
	}
	return (index);
}

void	ft_search_position(t_stack *a, int *index, int size, int min_value)
{
	int	k;
	int	j;

	k = 0;
	while (k < a->top_stack)
	{
		j = 0;
		while (j < size)
		{
			if (a->stack[k] == (j + min_value))
			{
				index[j] = 1;
				break ;
			}
			j++;
		}
		k++;
	}
}
