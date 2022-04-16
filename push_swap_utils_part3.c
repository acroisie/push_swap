/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_part3.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:45:17 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/28 16:48:29 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_line_isspace(char *line)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!line)
		exit (0);
	while (line[i])
	{
		if (' ' == line[i])
			j++;
		i++;
	}
	if (i == j)
	{
		free(line);
		ft_display_error();
	}
}
