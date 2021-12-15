/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:24:27 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/15 18:54:37 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_stack *a)
{
	int	temp;

	temp = a->stack[a->top_stack];
	a->stack[a->top_stack] = a->stack[a->top_stack - 1];
	a->stack[a->top_stack - 1] = temp;
}

void	ft_swap_b(t_stack *b)
{
	int	temp;

	temp = b->stack[b->top_stack];
	b->stack[b->top_stack] = b->stack[b->top_stack - 1];
	b->stack[b->top_stack - 1] = temp;
}

void	ft_super_swap(t_stack *a, t_stack *b)
{
	ft_swap_a(a);
	ft_swap_a(b);
}

void	ft_push_a(t_stack *a, t_stack *b)
{
	if (b->top_stack == -1)
		return ;
	a->top_stack++;
	a->stack[a->top_stack] = b->stack[b->top_stack];
	b->top_stack--;
}

void	ft_push_b(t_stack *a, t_stack *b)
{
	if (a->top_stack == -1)
		return ;
	b->top_stack++;
	b->stack[b->top_stack] = a->stack[a->top_stack];
	a->top_stack--;
}
