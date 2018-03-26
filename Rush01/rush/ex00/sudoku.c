/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 21:11:46 by khou              #+#    #+#             */
/*   Updated: 2018/03/25 21:11:48 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	sudoku(char **puzzle)
{
	int		row;
	int		col;
	char	num;

	if (!find_dot_pos(puzzle, &row, &col))
	{
		return (1);
	}
	num = '1';
	while (num <= '9')
	{
		if (possible_find(puzzle, row, col, num))
		{
			puzzle[row][col] = num;
			if (sudoku(puzzle))
			{
				return (1);
			}
			puzzle[row][col] = '.';
		}
		num++;
	}
	return (0);
}
