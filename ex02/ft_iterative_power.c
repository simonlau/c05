int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	result = nb;
	i = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
