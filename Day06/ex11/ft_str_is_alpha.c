/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:48:58 by khou              #+#    #+#             */
/*   Updated: 2018/03/20 22:50:04 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		n;
	int		len;

	n = 0;
	len = 0;
	while ((str[n] >= 'A' && str[n] <= 'Z') || (str[n] >= 'a' && str[n] <= 'z'))
		n++;
	while (str[len] != '\0')
		len++;
	if (len == 0 || n == len)
		return (1);
	else
		return (0);
}
