/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:16:00 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/29 16:12:13 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_display(t_stack stack) // To delete
{
	int	size;

	size = stack.top_stack;
	while (size >= 0)
	{
		printf("[%d]\n", stack.stack[size]);
		size--;
	}
} // To delete

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	ft_arg_parse_and_fill(&a, &b, argc, argv);
	ft_display(a); //To delete
	ft_sort(&a, &b);
	return (0);
}
