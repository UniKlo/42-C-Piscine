/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 20:40:19 by khou              #+#    #+#             */
/*   Updated: 2018/03/20 22:56:07 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
			str[n] += 32;
		n++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[i] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		i++;
	}
	return (str);
}
