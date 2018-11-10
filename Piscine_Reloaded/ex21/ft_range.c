/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:40:04 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/08 18:35:36 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;

	if (min >= max)
	{
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (--max >= min)
		tab[max - min] = max;
	return (tab);
}
