/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:20:46 by khou              #+#    #+#             */
/*   Updated: 2018/03/26 23:14:20 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*ans;

	i = 0;
	ans = (int*)malloc(sizeof(*ans) * length);
	while (i < length)
	{
		ans[i] = (*f)(tab[i]);
		i++;
	}
	return (ans);
}
