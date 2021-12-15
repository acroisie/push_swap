/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:16:00 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/15 18:55:58 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_display(t_stack a, int size)
{
	while (size >= 0)
	{
		printf("%d\n", a.stack[size]);
		size--;
	}
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		i;

	i = 0;
	printf("argv[0]: %s\n", argv[0]); //To delete
	printf("argc: %d\n", argc); //To delete
	ft_init_stack(&a, &b, 5);
	// ft_init_stack(&b, 5);
	while (i < 5)
	{
		a.stack[i] = i;
		i++;
	}
	ft_display(a, a.top_stack);
	ft_push_b(&a, &b);
	ft_push_b(&a, &b);
	printf("Stack A\n"); //To delete
	// while (i < 5)
	// {
	// 	b.stack[i] = i;
	// 	i++;
	// }
	ft_display(b, b.top_stack);
	printf("Stack B\n"); //To delete
	ft_push_a(&a, &b);
	ft_display(a, a.top_stack);
	printf("Stack A\n"); //To delete
	ft_display(b, b.top_stack);
	printf("Stack B\n"); //To delete
	return (0);
}
