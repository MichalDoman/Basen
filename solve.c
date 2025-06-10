#include <stdio.h>

void	rev_arr(int *arr, int size);
int	check_row(int *row, int size, int value, int col_id);
int	check_col(int **grid, int size, int value, int row_id, int col_id);
int	count_visible(int *arr, int size);

void	presolve(int **input, int **grid, int size)
{
	int	i; //Iterator over input (4 directions)
	int	j; //Iterator over instructions from each direction
	int	k; 
	
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
			j++;
		}
		i++;
	}
}

void	solve(int **input, int **grid, int size)
{
	presolve(input, grid, size);
}
