int		ft_iterative_factorial(int nb)
{
	int fact;

	if (nb < 0 || nb > 12)
		return (0);
	while (nb != 0)
	{
		fact = nb * (nb - 1);
		nb--;
	}
	return (fact);
}
