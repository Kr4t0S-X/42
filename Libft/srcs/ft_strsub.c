/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 05:35:04 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/13 05:46:12 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new;
	int i;

	new = malloc(sizeof(char) * (len + 1));
		if (!new)
			return (NULL);
	i = start;
	while (i <= len)
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}
