#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,int c, size_t n)
{
	char *cdst;
	char *csrc;
	unsigned char ch;
	unsigned int i;

	cdst = (char *) dst;
	csrc = (char *) src;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (csrc[i] == ch)
			return(&cdst[i + 1]);
		else
			cdst[i] = csrc[i];
			i++;
	}
	return (cdst);
}
