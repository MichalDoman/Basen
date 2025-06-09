int	check_row(int *row, int size, int value, int col_id)
{
	int	i;
		
	i = 0;
	while (i < size)
	{
		if (i == col_id)
			continue ;
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
			continue ;
		if (grid[i][col_id] == value)
			return (0);
		i++;
	}
	return (1);
}

int	count_visible()
{
	
}
