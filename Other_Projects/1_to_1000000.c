#include <libc.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (void)
{
	int i;
	int x;
	int c;
	int k;
	int l = 20;
	int tab[l];
	
	i = 0;
	c = 0;
	k = 0;
	x = 1;
	while (i != l)
	{
		if (tab[i] % 2 != 0)
			tab[i] = '\0';
		else 
			tab[i] = x;
		i++;
		x++;
	}
	i = 0;
	while (k != (l - 1))
	{
		while (i != l)
		{
		i = 0;
			if (tab[i] != '\0')
			{
				c++;
				if (tab[i] != '\0' && c % 2 == 0)
					tab[i] = '\0';
			}
			else if (tab[i] == '\0')
				k++;
			if (tab[i] != '\0')
			{
				c++;
				if (tab[i] != '\0' && c % 2 != 0)
					tab[i] = '\0';
			}
			else if (tab[i] == '\0')
				k++;
			i++;
		}
	}
	i = 0;
	while (i != l)
	{
	ft_putchar(tab[i]);
	i++;
	}
	return (0);
}
