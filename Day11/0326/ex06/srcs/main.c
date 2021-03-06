/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:47:03 by khou              #+#    #+#             */
/*   Updated: 2018/03/27 23:22:33 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char *argv[])
{
	int		a;
	int		b;
	char	*operator;
	int		i;

	operator = "+-*/%";
	if (argc != 4)
		return (0);
	i = 0;
	while (operator[i] && operator[i] != *argv[2])
		i++;
	if (i == 5)
	{
		ft_putstr("0\n");
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_error(b, argv))
		return (0);
	ft_putnbr(g_funptr[i](a, b));
	ft_putchar('\n');
	return (0);
}
