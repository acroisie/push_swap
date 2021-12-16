/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:54:40 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/16 18:07:51 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stack(t_stack *a, t_stack *b, int size)
{
	a->stack = malloc(size * sizeof(int));
	b->stack = malloc(size * sizeof(int));
	a->top_stack = (size - 1);
	b->top_stack = -1;
}

int	ft_display_error(void)
{
	write(2, "Error\n", 6);
	exit (0);
}

int	ft_arg_count(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_count(argv[1]);
	}
}

// int	ft_fill_stack(char *argv)
// {
	
// }
