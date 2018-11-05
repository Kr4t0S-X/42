#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char *tab;
	int i;
	int len;

	i = 0;
	len = 0;
	while (s1[i])
		i++;
	len = i;
	i = 0;
	tab = (char *)malloc(sizeof(char) * len);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = s1[i];
	return (tab);
}
