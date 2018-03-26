/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 16:26:25 by khou              #+#    #+#             */
/*   Updated: 2018/03/23 16:26:34 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int	index;
	int	i;

	index = 0;
	while (index < length)
	{
		i = 0;
		while ((tab[index] != tab[i] || i == index) && i < length)
			i++;
		if (tab[index] != tab[i])
			return (tab[index]);
		++index;
	}
	return (0);
}
