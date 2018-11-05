#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *cdst;
	char *csrc;
	unsigned int i;

	cdst = (char *) dst;
	csrc = (char *) src;
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (cdst);
}
