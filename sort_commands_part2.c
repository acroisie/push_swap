/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_commands_part2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:14:56 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/16 18:05:21 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_stack *a)
{
	int	mem;
	int	i;

	i = a->top_stack;
	mem = a->stack[a->top_stack];
	while (i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		i--;
	}
	a->stack[i] = mem;
	write(1, "ra", 2);
}

void	ft_rotate_b(t_stack *b)
{
	int	mem;
	int	i;

	i = b->top_stack;
	mem = b->stack[b->top_stack];
	while (i > 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
	}
	b->stack[i] = mem;
	write(1, "rb", 2);
}

void	ft_rotate_all(t_stack *a, t_stack *b)
{
	ft_rotate_a(a);
	ft_rotate_b(b);
	write(1, "rr", 2);
}

void	ft_reverse_rotate_a(t_stack *a)
{
	int	mem;
	int	i;

	i = 0;
	mem = a->stack[0];
	while (i < a->stack[a->top_stack])
	{
		a->stack[i] = a->stack[i + 1];
		i++;
	}
	a->stack[i] = mem;
	write(1, "rra", 3);
}

void	ft_reverse_rotate_b(t_stack *b)
{
	int	mem;
	int	i;

	i = 0;
	mem = b->stack[0];
	while (i < b->stack[b->top_stack])
	{
		b->stack[i] = b->stack[i + 1];
		i++;
	}
	b->stack[i] = mem;
	write(1, "rrb", 3);
}
