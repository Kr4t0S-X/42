#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *cdst;
	char *csrc;
	char *tab;
	unsigned int i;

	cdst = (char *) dst;
	csrc = (char *) src;
	tab = NULL;
	i = 0;
	while (i < len)
	{
		tab[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		cdst[i] = tab[i];
		i++;
	}
	return (cdst);
}
