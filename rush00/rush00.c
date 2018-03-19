/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 17:08:34 by khou              #+#    #+#             */
/*   Updated: 2018/03/18 17:08:52 by khou             ###   ########.fr       */
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
		printline(x, 'o', '-', 'o');
		while (count_row < y - 1)
		{
			printline(x, '|', ' ', '|');
			count_row++;
		}
		if (y > 1)
		{
			printline(x, 'o', '-', 'o');
		}
	}
}
