int	ft_recursive_power(int nb, int power)
{
	int	reduce_case;

	if (power < 0)
	{
		return (0);
	}
	if (power == 1)
	{
		return (nb);
	}
	reduce_case = power - 1;
	return (nb * ft_recursive_power(nb, reduce_case));
}
