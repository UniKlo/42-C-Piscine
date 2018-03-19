/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 17:15:02 by khou              #+#    #+#             */
/*   Updated: 2018/03/18 17:15:04 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printline(int x, char a, char b, char c)
{
	int count_col;

	count_col = 1;
	ft_putchar(a);
	while (count_col < x - 1)
	{
		ft_putchar(b);
		count_col++;
	}
	if (x > 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	count_row;

	count_row = 1;
	if (y <= 0 || x <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	else
	{
		printline(x, 'A', 'B', 'C');
		while (count_row < y - 1)
		{
			printline(x, 'B', ' ', 'B');
			count_row++;
		}
		if (y > 1)
		{
			printline(x, 'A', 'B', 'C');
		}
	}
}
