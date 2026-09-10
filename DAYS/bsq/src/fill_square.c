/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 10:58:45 by sfaraji           #+#    #+#             */
/*   Updated: 2026/09/02 19:03:56 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	fill_square(t_map *map, t_square square)
{
	int	start_row;
	int	start_col;
	int	row;
	int	col;

	if (square.size <= 0)
		return ;
	start_row = square.row - square.size + 1;
	start_col = square.col - square.size + 1;
	row = start_row;
	while (row <= square.row)
	{
		col = start_col;
		while (col <= square.col)
		{
			map->grid[row][col] = map->full;
			col++;
		}
		row++;
	}
}
