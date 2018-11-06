#include <unistd.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char *s;
	unsigned char ch;

	if (str == NULL)
		return (NULL);
	s = str;
	ch = (unsigned char)c;
	while (n--)
		*s++ = ch;
	return(str);
}

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
