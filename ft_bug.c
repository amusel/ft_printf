/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bug.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:09:34 by amusel            #+#    #+#             */
/*   Updated: 2016/12/07 16:14:53 by amusel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bug(char *str, int i)
{
	ft_putstr(str);
	ft_putstr(" ");
	ft_putstr(ft_itoa(i));
	ft_putstr("\n");
}
