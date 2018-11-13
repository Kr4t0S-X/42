/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:00:59 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/13 00:27:21 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,int c, size_t n)
{
	char *cdst;
	char *csrc;
	unsigned char ch;
	unsigned int i;

	cdst = (char *) dst;
	csrc = (char *) src;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (csrc[i] == ch)
			return(&cdst[i + 1]);
		else
			cdst[i] = csrc[i];
			i++;
	}
	return (cdst);
}
