/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 18:05:02 by khou              #+#    #+#             */
/*   Updated: 2018/03/27 10:16:08 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;

	i = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			i++;
		tab++;
	}
	return (i);
}
