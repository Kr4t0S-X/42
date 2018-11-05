#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int c, char **v)
{
	int		i;

	i = 1;
	while (i < c - 1)
	{
		if (ft_strcmp(v[i], v[i + 1]) > 0)
		{
			ft_swap(&v[i], &v[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < c)
	{
		ft_putstr(v[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
