/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 14:35:55 by khou              #+#    #+#             */
/*   Updated: 2018/03/17 14:59:59 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		n;

	n = 1;
	while (n * n <= nb)
	{
		if (n * n == nb)
		{
			return (n);
		}
		n++;
	}
	return (0);
}
