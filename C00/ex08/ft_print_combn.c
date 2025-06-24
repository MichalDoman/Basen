#include <unistd.h>

void	handle_recursion(int n, int val, int depth, int *arr)
{
	int	i;

	while (val <= 9)
	{
		arr[depth] = val;
		if (depth + 1 < n)
			handle_recursion(n, val + 1, depth + 1, arr);
		else
		{
			i = -1;
			while (++i < n)
				write(1, (char []){'0' + arr[i]}, 1);
			if (arr[0] != 10 - n)
				write(1, ", ", 2);
		}
		val++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	if (n > 0 && n < 10)
		handle_recursion(n, 0, 0, arr);
}

int	main(void)
{
	ft_print_combn(9);
	return (0);
}
