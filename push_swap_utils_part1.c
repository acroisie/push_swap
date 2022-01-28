/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_part1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:54:40 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/28 17:14:10 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_secure_exit(char **tab)
{
	ft_free_split(tab);
	exit(0);
}

void	ft_init_stack(t_stack *a, t_stack *b, int size, char **tab)
{
	a->stack = malloc(size * sizeof(int));
	if (!a->stack)
	{
		ft_free_split(tab);
		exit (0);
	}
	b->stack = malloc(size * sizeof(int));
	if (!b->stack)
	{
		ft_free_split(tab);
		free (a->stack);
		exit (0);
	}
	a->top_stack = (size - 1);
	b->top_stack = -1;
}

void	ft_init_and_fill_stack(t_stack *a, t_stack *b, int size, char **tab)
{
	int	i;

	i = 0;
	ft_init_stack(a, b, size, tab);
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
	line = NULL;
	while (i < argc)
	{
		temp = ft_strjoin(argv[i], " ");
		if (!temp)
			exit (0);
		line = ft_strjoin_free_s1(line, temp);
		if (!line)
		{
			free(temp);
			exit (0);
		}
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
	ft_line_isspace(line);
	tab = ft_split(line, ' ');
	free(line);
	if (!tab)
		ft_secure_exit(tab);
	size = ft_errors_check(tab);
	ft_init_and_fill_stack(a, b, size, tab);
	ft_free_split(tab);
	ft_check_duplicate(a, b);
}
