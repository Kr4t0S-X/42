#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int c, char **v)
{
	int i;
	int j;

	i = 1;
	while (i != c)
	{
		j = 0;
		while (v[i][j] != '\0')
		{
			ft_putchar(v[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
