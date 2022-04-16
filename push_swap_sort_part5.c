/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_part5.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:50:05 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/27 12:40:27 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five_group3(t_stack *a, t_stack *b)
{
	ft_push_a(a, b);
	ft_swap_a(a);
}

void	ft_sort_five_group4(t_stack *a, t_stack *b)
{
	ft_rotate_a(a);
	ft_push_a(a, b);
	ft_swap_a(a);
	ft_reverse_rotate_a(a);
}

void	ft_sort_five_group5(t_stack *a, t_stack *b)
{
	ft_reverse_rotate_a(a);
	ft_push_a(a, b);
	ft_rotate_a(a);
	ft_rotate_a(a);
}

void	ft_sort_two(t_stack *a)
{
	if (a->stack[0] < a->stack[1])
		ft_swap_a(a);
}
