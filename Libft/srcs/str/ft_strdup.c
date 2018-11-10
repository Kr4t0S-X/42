/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:08:46 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/09 20:09:09 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *tab;
	int i;
	int len;

	i = 0;
	len = 0;
	while (s1[i])
		i++;
	len = i;
	i = 0;
	tab = (char *)malloc(sizeof(char) * len);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = s1[i];
	return (tab);
}
