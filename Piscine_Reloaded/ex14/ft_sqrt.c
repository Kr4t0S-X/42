int		ft_sqrt(int nb)
{
	int i;
	int sqrt;
	
	i = 0;
	sqrt = 0;
	if (nb < 0 || nb > 2147483647)
		return (0);
	while (i != 9)
	{
		sqrt = nb / i;
		if (sqrt == i && sqrt % i == 0)
			return(sqrt);
		else
			return (0);
	}
	return (0);
}
