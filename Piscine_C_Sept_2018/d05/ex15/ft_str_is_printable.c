/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:15:44 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/14 05:03:34 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	unsigned int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 32 || str[x] > 126)
			return (0);
		x++;
	}
	return (1);
}