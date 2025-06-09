#include <unistd.h>
#include <stdlib.h>

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

int	*rev_arr(int *arr, int size)
{
	int	temp;
	int	i;
	
	i = 0;
	while (i < size / 2)
	{
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
		i++;
	}
	return (arr);
}

void	put_2d_array(int **arr, int size)
{
	int	i;
	int	j;
	char	temp;
	
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			temp = '0' + arr[i][j];
			write(1, &temp, 1);
			if (j > 0 && j % (size - 1) == 0)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}

void	free_2d_array(int **arr)
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
