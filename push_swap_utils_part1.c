/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_part1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:54:40 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/20 18:14:35 by acroisie         ###   ########lyon.fr   */
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

char	*ft_join_args(char **argv)
{
	char	*line;
	int		i;

	i = 0;
	argv++;
	while (argv[i])
	{
		if (line)
			free(line);
		line = ft_strjoin(argv[i], " ");
		i++;
	}
	return (line);
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
	char	*line;
	char	**tab;

	line = ft_join_args(argv);
	tab = ft_split(line, ' ');
	ft_error_check(tab);
}
