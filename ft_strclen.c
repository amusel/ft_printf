/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:13:36 by amusel            #+#    #+#             */
/*   Updated: 2016/12/07 16:08:46 by amusel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strclen(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i);
}
