/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 23:28:21 by khou              #+#    #+#             */
/*   Updated: 2018/03/27 23:28:22 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

int		ft_add(int a, int b);

int		ft_sub(int a, int b);

int		ft_mul(int a, int b);

int		ft_div(int a, int b);

int		ft_mod(int a, int b);

int		ft_atoi(char *str);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int		ft_error(int b, char **argv);

int		(*g_funptr[])(int, int) = {ft_add, ft_sub, ft_mul, ft_div, ft_mod};

#endif
