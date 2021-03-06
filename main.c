/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:16:00 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/25 14:50:44 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc > 1)
	{
		ft_arg_parse_and_fill(&a, &b, argc, argv);
		ft_push_swap(&a, &b);
		free(a.stack);
		free(b.stack);
		return (0);
	}
	return (0);
}
