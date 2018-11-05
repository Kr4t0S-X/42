#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int x;

	x = 0;
	while (x != 9)
		ft_putchar(x);
}
