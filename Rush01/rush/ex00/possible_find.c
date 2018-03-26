/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 21:12:00 by khou              #+#    #+#             */
/*   Updated: 2018/03/25 21:12:00 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	puzzle_row(char **puzzle, int row, char num)
{
	int		j;

	j = 0;
	while (j < 9)
	{
		if (puzzle[row][j] == num)
		{
			return (0);
		}
		j++;
	}
	return (1);
}

int	puzzle_col(char **puzzle, int col, char num)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (puzzle[i][col] == num)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	puzzle_box(char **puzzle, int row_box, int col_box, char num)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (puzzle[i + (3 * row_box)][j + (3 * col_box)] == num)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	possible_find(char **puzzle, int row, int col, char num)
{
	if (puzzle_row(puzzle, row, num))
	{
		if (puzzle_col(puzzle, col, num))
		{
			if (puzzle_box(puzzle, row / 3, col / 3, num))
			{
				return (1);
			}
			return (0);
		}
		return (0);
	}
	return (0);
}
