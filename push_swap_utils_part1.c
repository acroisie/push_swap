/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_part1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:54:40 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/21 19:08:02 by acroisie         ###   ########lyon.fr   */
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

// void	ft_fill_stack(t_stack *a, char **tab)
// {
	
// }

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
		line = ft_strjoin(temp, line);
		i++;
	}
	return (line);
}

void	ft_error_check(char **tab) // Penser a checker le -
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (!ft_isdigit(tab[i][j]))
				ft_display_error();
			j++;
		}
		i++;
	}
}

void	ft_arg_parse_and_fill(t_stack *a, t_stack *b, int argc, char **argv)
{
	char	*line;
	char	**tab;

	a = NULL; // To_Delete
	b = NULL; // To_Delete
	line = ft_join_args(argv, argc);
	tab = ft_split(line, ' ');
	ft_error_check(tab);
}
