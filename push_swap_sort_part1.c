/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 08:06:25 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/04 18:11:02 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_read_and_sort(t_stack *a, t_stack *b, int *index, int size)
{
	
}

void	ft_sort(t_stack *a, t_stack *b)
{
	int	*index;
	int	min_value;
	int	max_value;
	int	size;

	min_value = ft_min_value(a);
	max_value = ft_max_value(a);
	size = 0;
	index = ft_init_index(min_value, max_value, &size);
	ft_search_position(a, index, size, min_value);
	ft_read_and_sort(a, b, index, size);
}
