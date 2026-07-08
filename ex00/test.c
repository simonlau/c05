#include <assert.h>

int		ft_iterative_factorial(int nb);

void	test_invalid(void)
{
	assert(0 == ft_iterative_factorial(-1));
	assert(0 == ft_iterative_factorial(-9));
}

void	test_valid(void)
{
	assert(1 == ft_iterative_factorial(0));
	assert(1 == ft_iterative_factorial(1));
	assert(362880 == ft_iterative_factorial(9));
}
int	main(void)
{
	test_invalid();
	test_valid();
}
