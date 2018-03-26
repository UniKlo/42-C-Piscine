/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 16:22:07 by khou              #+#    #+#             */
/*   Updated: 2018/03/23 16:22:12 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int	max;
	int	i;

	i = 0;
	max = 0;
	while (i < length)
	{
		if (tab[i] > max)
			max = tab[i];
		++i;
	}
	return (max);
}