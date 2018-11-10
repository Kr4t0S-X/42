/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:51:15 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/08 17:18:41 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display(char *filename)
{
	int		f;
	char	ch;

	f = open(filename, O_RDONLY);
	if (f < 0)
		return ;
	while (read(f, &ch, 1))
		write(1, &ch, 1);
	close(f);
}

int		main(int c, char **v)
{
	if (c == 1)
		write(2, "File name missing.\n", 19);
	if (c > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display(v[1]);
	return (0);
}
