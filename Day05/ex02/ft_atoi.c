/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 10:23:40 by khou              #+#    #+#             */
/*   Updated: 2018/03/20 21:20:19 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		sign;
	int		product;
	int		i;

	sign = 1;
	product = 0;
	i = 0;
	while (str[i] <= 32 || str[i] == 127)
		i++;
	if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		sign = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		product = str[i] - '0' + product * 10;
		i++;
	}
	return (sign * product);
}
