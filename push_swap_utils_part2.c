/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_part2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:44:51 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/22 14:02:27 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_display_error(void)
{
	write(2, "Error\n", 6);
	exit (0);
}

void	ft_check_is_digit(char **tab)
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
			{
				if (!(tab[i][j] == '-' && ft_isdigit(tab[i][j + 1])))
					ft_display_error();
			}
			j++;
		}
		i++;
	}
}

void	ft_check_duplicate(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (!ft_strncmp(tab[i], tab[j],
					(ft_strlen(tab[i]) + ft_strlen(tab[j]))))
				ft_display_error();
			j++;
		}
		i++;
	}
}

void	ft_errors_check(char **tab)
{
	ft_check_is_digit(tab);
	ft_check_duplicate(tab);
}
