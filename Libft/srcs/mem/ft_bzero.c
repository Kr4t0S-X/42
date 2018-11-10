/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:56:26 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/09 20:16:20 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char *s;
	unsigned char ch;

	if (str == NULL)
		return (NULL);
	s = (char *)str;
	ch = (unsigned char)c;
	while (n--)
		*s++ = ch;
	return(str);
}

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
