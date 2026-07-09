#include <assert.h>

int		ft_is_prime(int nb);

void	test_not_prime(void)
{
	assert(0 == ft_is_prime(0));
	assert(0 == ft_is_prime(1));
	assert(0 == ft_is_prime(2 * 4));
	assert(0 == ft_is_prime(17 * 57));
	assert(0 == ft_is_prime(401 * 593));
}

void	test_prime(void)
{
	assert(1 == ft_is_prime(2));
	assert(1 == ft_is_prime(3));
	assert(1 == ft_is_prime(5));
	assert(1 == ft_is_prime(7));
	assert(1 == ft_is_prime(11));
	assert(1 == ft_is_prime(2005320763));
}

int	main(void)
{
	test_not_prime();
	test_prime();
}
