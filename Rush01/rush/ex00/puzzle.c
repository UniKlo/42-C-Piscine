/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 21:12:15 by khou              #+#    #+#             */
/*   Updated: 2018/03/25 21:12:17 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

char	**savepuzzle(char **argv)
{
	char	**puzzle;
	int		i;
	int		j;

	puzzle = (char**)malloc(sizeof(*puzzle) * 10);
	i = 0;
	while (i < 9)
	{
		j = 0;
		puzzle[i] = (char*)malloc(sizeof(puzzle) * 10);
		while (j < 9)
		{
			puzzle[i][j] = argv[i + 1][j];
			j++;
		}
		puzzle[i][j] = '\0';
		i++;
	}
	puzzle[i] = 0;
	return (puzzle);
}

void	free_puzzle(char **puzzle)
{
	int	i;

	i = 0;
	while (puzzle[i])
	{
		free(puzzle[i]);
		i++;
	}
	free(puzzle);
}
