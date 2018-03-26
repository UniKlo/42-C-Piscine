/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 21:12:39 by khou              #+#    #+#             */
/*   Updated: 2018/03/25 21:12:43 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		valid_check(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc != 10)
		return (1);
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (valid_char(argv[i][j]))
			{
				return (1);
			}
			j++;
		}
		if (j != 9)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int		valid_char(char c)
{
	if (!(c >= '0' && c <= '9') && c != '.')
	{
		return (1);
	}
	return (0);
}
