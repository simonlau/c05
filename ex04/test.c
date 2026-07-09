#include <assert.h>

int		ft_fibonacci(int index);

void	test_invalid(void)
{
	assert(-1 == ft_fibonacci(-1));
	assert(-1 == ft_fibonacci(-42));
}

void	test_valid(void)
{
	assert(0 == ft_fibonacci(0));
	assert(1 == ft_fibonacci(1));
	assert(1 == ft_fibonacci(2));
	assert(2 == ft_fibonacci(3));
	assert(3 == ft_fibonacci(4));
	assert(5 == ft_fibonacci(5));
	assert(8 == ft_fibonacci(6));
	assert(13 == ft_fibonacci(7));
}

int	main(void)
{
	test_invalid();
	test_valid();
}
