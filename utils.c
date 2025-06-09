#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_sqrt(int nb)
{
	int	i;
	
	i = 0;
	while (i <= (nb / 2))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

void	put_2d_array(char **arr, int size)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			write(1, &arr[i][j], 1);
			if (j % size == 0)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}
