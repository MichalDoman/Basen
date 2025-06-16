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

void	rev_arr(int *arr, int size)
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
}

void	put_2d_array(int **arr, int size)
{
	int	i;
	int	j;
	char	temp;
	
	i = 0;
	while (i < size)
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

void	free_2d_array(int **arr, int size)
{
	int	i;
	
	i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
