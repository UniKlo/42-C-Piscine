/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 23:20:49 by khou              #+#    #+#             */
/*   Updated: 2018/03/27 23:20:54 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_error(int b, char **argv)
{
	if (b == 0)
	{
		if (*argv[2] == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (1);
		}
		else if (*argv[2] == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (1);
		}
	}
	return (0);
}
