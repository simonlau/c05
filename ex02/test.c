#include <assert.h>

int		ft_recursive_power(int nb, int power);

void	test_invalid(void)
{
	assert(0 == ft_recursive_power(42, -1));
	assert(0 == ft_recursive_power(42, -42));
}

void	test_valid(void)
{
	assert(8 == ft_recursive_power(2, 3));
	assert(16 == ft_recursive_power(2, 4));
	assert(3111696 == ft_recursive_power(42, 4));
}

void	test_zero(void)
{
	assert(0 == ft_recursive_power(0, 0));
}

int	main(void)
{
	test_invalid();
	test_valid();
	test_zero();
}
