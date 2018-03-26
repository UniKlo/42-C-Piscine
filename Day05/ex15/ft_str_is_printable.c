/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 23:16:05 by khou              #+#    #+#             */
/*   Updated: 2018/03/20 23:20:09 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= ' ' && str[n] <= '~')
			n++;
		else
			return (0);
	}
	return (1);
}