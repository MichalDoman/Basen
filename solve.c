#include <stdio.h>

int	check_row(int *row, int size, int value, int col_id);
int	check_col(int **grid, int size, int value, int row_id, int col_id);
int	is_row_correct(int **input, int **grid, int size, int row_id);
int	is_col_correct(int **input, int **grid, int size, int col_id);

void	presolve(int **input, int **grid, int size)
{
	int	i; //Iterator over input (4 directions)
	int	j; //Iterator over instructions from each direction
	int	k; //Iterator for filling ascending values for max visibles
	
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			if (input[i][j] == size)
			{
				k = 0;
				while (k < size)
				{
					if (i == 0)
						grid[k][j] = k + 1;
					else if (i == 1)
						grid[k][j] = size - k;
					else if (i == 2)
						grid[j][k] = k + 1;
					else
						grid[j][k] = size - k;
					k++;
				}
			}
			if (input[i][j] == 1)
			{
				if (i == 0)
					grid[0][j] = size;
				else if (i == 1)
					grid[size - 1][j] = size;
				else if (i == 2)
					grid[j][0] = size;
				else
					grid[j][size - 1] = size;
			}
			j++;
		}
		i++;
	}
}

int	solve(int **input, int **grid, int size, int start)
{
	int	row;
	int	col;
	int	value;
	
	printf("start = %d \n", start);
	value = 1;
	while (start < size * size)
	{
		row = start / size;
		col = start % size;
		if (grid[row][col] == 0)
		{
			while (value <= size)
			{
				printf("row = %d, col = %d, value = %d \n", row, col, value);
				if (check_row(grid[row], size, value, col) 
					&& check_col(grid, size, value, row, col))
				{
					printf("Number is correct \n");
					grid[row][col] = value;
					if (start > 0 && (start + 1) % size == 0)
					{
						if (!is_row_correct(input, grid, size, row))
						{
							printf("Row is not correct \n");
							grid[row][col] = 0;
							return (0);
						}
					}
					if (row == (size - 1))
					{
						if (!is_col_correct(input, grid, size, col))
						{
							printf("Col is not correct \n");
							grid[row][col] = 0;
							return (0);
						}
					}
					if (solve(input, grid, size, start + 1))
						return (1);
				}
				value++;
			}
			if (value > size)
			{
				grid[row][col] = 0;
				return (0);
			}
		}
		start++;
	}
	return (1);
}
