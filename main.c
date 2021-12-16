/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:16:00 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/16 17:58:04 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_display(t_stack a) // To delete before push
{
	int	size;

	size = a.top_stack;
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

	
	return (0);
}
