#include <stdio.h>

void	rev_arr(int *arr, int size);

int	check_row(int *row, int size, int value, int col_id)
{
	int	i;
		
	i = 0;
	while (i < size)
	{
		if (i == col_id)
		{
			i++;
			continue ;
		}	
		if (row[i] == value)
			return (0);
		i++;
	}
	return (1);
}

int	check_col(int **grid, int size, int value, int row_id, int col_id)
{
	int	i;
	
	i = 0;
	while (i < size)
	{
		if (i == row_id)
		{
			i++;
			continue ;
		}
		if (grid[i][col_id] == value)
			return (0);
		i++;
	}
	return (1);
}

int	count_visible(int *arr, int size)
{
	int	count;
	int	temp;
	int	i;
	
	i = 1;
	count = 1;
	temp = arr[0];
	while (i < size)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
			count++;
		}
		i++;	
	}
	return (count);
}

int	is_row_correct(int **input, int **grid, int size, int row_id)
{
	int	left;
	int	right;
	
	left = input[2][row_id];
	right = input[3][row_id];
	if (count_visible(grid[row_id], size) != left)
		return (0);
	rev_arr(grid[row_id], size);
	if (count_visible(grid[row_id], size) != right)
		return (0);
	rev_arr(grid[row_id], size);
	return (1);
	
}
