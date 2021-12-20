/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:54:40 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/20 16:39:16 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_display_error(void)
{
	write(2, "Error\n", 6);
	exit (0);
}

void	ft_init_stack(t_stack *a, t_stack *b, int size)
{
	a->stack = malloc(size * sizeof(int));
	b->stack = malloc(size * sizeof(int));
	a->top_stack = (size - 1);
	b->top_stack = -1;
}

void	ft_fill_stack(t_stack *a, char **tab)
{
	
}

void	ft_error_check(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (!ft_isdigit)
				ft_display_error();
			j++;
		}
		i++;
	}
}

void	ft_arg_parse_and_fill(t_stack *a, t_stack *b, int argc, char **argv)
{
	t_stack	stack;
	char	**tab;
	int		size;

	size = 0;
	if (argc == 2)
	{
		tab = ft_split(argv[1], ' ');
		ft_error_check(tab);
		while (tab[size])
		{
			size++;
		}
		ft_init_stack(a, b, size);
		ft_fill_stack(a, tab);
	}
	else
	{
		ft_init_stack(a, b, (argc - 1));
		argv++;
		ft_fill_stack(a, argv);
	}
}
