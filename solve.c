#include <stdio.h>

int	check_row(int *row, int size, int value, int col_id);
int	check_col(int **grid, int size, int value, int row_id, int col_id);
int	count_visible(int *arr, int size);

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

void	solve(int **input, int **grid, int size, int start)
{
	int	row;
	int	col;
	int	value;
	
	value = 0;
	while (start < size * size)
	{
		row = start / size;
		col = start % size;
		if (grid[row][col] == 0)
		{
			
		}
		if (is_solved)
		{
			return ;
		}
		start++;
	}
	/*
	for each cell with 0, insert a number.
	for each number insert all other cells with 0. 
	when row ends check visibility (left, right).
	check when row ends. check if row is last.
	if wrong reset, else continue.
	for last row check visibility for each column (top, bottom).
	if wrong reset. 
	 */
}
