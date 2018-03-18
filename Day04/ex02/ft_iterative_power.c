/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 13:42:20 by khou              #+#    #+#             */
/*   Updated: 2018/03/17 20:27:50 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		product;

	i = power;
	product = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i > 0)
	{
		product = product * nb;
		i--;
	}
	return (product);
}
