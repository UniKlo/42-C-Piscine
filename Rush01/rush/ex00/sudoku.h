/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 21:11:32 by khou              #+#    #+#             */
/*   Updated: 2018/03/25 22:28:42 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_ans(char **tab);
char	**savepuzzle(char **argv);
void	free_puzzle(char **puzzle);
int		sudoku(char **puzzle);
int		find_dot_pos(char **puzzle, int *row, int *col);
int		valid_check(int argc, char **argv);
int		valid_char(char c);
int		puzzle_col(char **puzzle, int col, char num);
int		puzzle_row(char **puzzle, int row, char num);
int		puzzle_box(char **puzzle, int row_box, int col_box, char num);
int		possible_find(char **puzzle, int row, int col, char num);

#endif
