/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_part1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:54:40 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/22 15:37:22 by acroisie         ###   ########lyon.fr   */
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

void	ft_init_and_fill_stack(t_stack *a, t_stack *b, int size, char **tab)
{
	int	i;

	i = 0;
	ft_init_stack(a, b, size);
	size--;
	while (size >= 0)
	{
		a->stack[size] = ft_atoi(tab[i]);
		size--;
		i++;
	}
}

char	*ft_join_args(char **argv, int argc)
{
	char	*line;
	char	*temp;
	int		i;

	i = 1;
	line = "";
	while (i < argc)
	{
		temp = ft_strjoin(argv[i], " ");
		line = ft_strjoin(line, temp);
		i++;
	}
	return (line);
}

void	ft_arg_parse_and_fill(t_stack *a, t_stack *b, int argc, char **argv)
{
	char	*line;
	char	**tab;
	int		size;

	line = ft_join_args(argv, argc);
	tab = ft_split(line, ' ');
	size = ft_errors_check(tab);
	ft_init_and_fill_stack(a, b, size, tab);
}
