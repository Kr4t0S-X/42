/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 21:55:35 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/10 22:19:57 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnew(size_t size)
{
	char *string;
	int i;

	i = 0;
		string = (void *)malloc(sizeof(size));
		if (!string)
			return (NULL);
	while (string[i] != '\0')
	{
		string[i] = '\0';
		i++;
	}
	i = 0;
	return (string);
}
