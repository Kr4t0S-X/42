#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	unsigned char ch;
	unsigned int i;

	str = (char *) s;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
