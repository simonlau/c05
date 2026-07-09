#include <assert.h>

int		ft_find_next_prime(int nb);

void	test_prime(void)
{
	assert(2 == ft_find_next_prime(2));
	assert(3 == ft_find_next_prime(3));
	assert(5 == ft_find_next_prime(5));
	// assert(1 == ft_is_prime(2005320763));
}

void	test_small(void)
{
	assert(2 == ft_find_next_prime(0));
	assert(2 == ft_find_next_prime(1));
	assert(5 == ft_find_next_prime(4));
	assert(7 == ft_find_next_prime(6));
	assert(11 == ft_find_next_prime(8));
	// assert(1 == ft_is_prime(2005320763));
}

int	main(void)
{
	test_prime();
	test_small();
}
