
int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
