
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * (max - min - 1));
	if (min >= max)
		return (NULL);
	else 
		return(tab);
}
