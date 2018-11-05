int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j] && s1[i] == '\0' && s2[j] == '\0')
				return (0);
			else
				return (s1 - s2);
			j++;
		}
		i++;
	}
	return (0);
}
