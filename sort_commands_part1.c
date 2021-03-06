/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_commands_part1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:24:27 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/27 17:18:41 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_stack *a)
{
	int	temp;

	temp = a->stack[a->top_stack];
	a->stack[a->top_stack] = a->stack[a->top_stack - 1];
	a->stack[a->top_stack - 1] = temp;
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_stack *b)
{
	int	temp;

	temp = b->stack[b->top_stack];
	b->stack[b->top_stack] = b->stack[b->top_stack - 1];
	b->stack[b->top_stack - 1] = temp;
	write(1, "sb\n", 3);
}

void	ft_super_swap(t_stack *a, t_stack *b)
{
	ft_swap_a(a);
	ft_swap_a(b);
	write(1, "ss\n", 3);
}

void	ft_push_a(t_stack *a, t_stack *b)
{
	write(1, "pa\n", 3);
	if (b->top_stack == -1)
		return ;
	a->top_stack++;
	a->stack[a->top_stack] = b->stack[b->top_stack];
	b->top_stack--;
}

void	ft_push_b(t_stack *a, t_stack *b)
{
	write(1, "pb\n", 3);
	if (a->top_stack == -1)
		return ;
	b->top_stack++;
	b->stack[b->top_stack] = a->stack[a->top_stack];
	a->top_stack--;
}
