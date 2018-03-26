/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 19:37:51 by khou              #+#    #+#             */
/*   Updated: 2018/03/25 21:14:43 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	char **puzzle;

	if (valid_check(argc, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	puzzle = savepuzzle(argv);
	if (argv == NULL)
	{
		write(1, "Error\n", 6);
	}
	else if (sudoku(puzzle))
	{
		print_ans(puzzle);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	free_puzzle(puzzle);
	return (0);
}
