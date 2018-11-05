int		ft_recursive_factorial(int nb)
{
	int fact;

	fact = 0;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb != 0)
	{
		return (fact = ft_recursive_factorial(nb) * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
