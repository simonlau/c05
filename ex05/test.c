#include <assert.h>

int		ft_sqrt(int nb);

void	test_perfect_squares(void)
{
	assert(1 == ft_sqrt(1));
	assert(2 == ft_sqrt(4));
	assert(3 == ft_sqrt(9));
	assert(4 == ft_sqrt(16));
	assert(10 == ft_sqrt(100));
}

void	test_imperfect_squares(void)
{
	assert(0 == ft_sqrt(0));
	assert(0 == ft_sqrt(2));
	assert(0 == ft_sqrt(3));
	assert(0 == ft_sqrt(5));
	assert(0 == ft_sqrt(6));
	assert(0 == ft_sqrt(42));
	assert(0 == ft_sqrt(142));
}

int	main(void)
{
	test_perfect_squares();
	test_imperfect_squares();
}
