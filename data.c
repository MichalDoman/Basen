#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	validate_input(char *input)
{
 	int	i;
 	int	j;
 	int	len;
 	int	grid_size;
 	
 	len = ft_strlen(input);
 	i = 0;
 	j = 1;
 	while (i < len)
 	{
		if (!(input[i] >= '0' && input[i] <= '9'))
			return (0);
		if (j < len && input[j] != ' ')
			return (0);
		i += 2;
		j += 2;
 	}
 	if ((len + 1) % 8 == 0)
 	{
 		grid_size = (len + 1) / 8;
 		return (grid_size);
 	}
 	return (0);
}

int	**parse_input(char *input, int size)
{
	int	**parsed_input;
	int	*temp;
	int	i; // iterator over 4 direcitons arrays.
	int	j; // iterator over singular direction array.
	int	k; // iterator over input. Skips spaces. Doesn't reset.
	
	parsed_input = malloc(4 * sizeof(int *));
	if (!parsed_input)
		return NULL;
	i = 0;
	k = 0;
	while (i < 4)
	{
		temp = malloc(size * sizeof(int));
		if (!temp)
			return NULL;
		j = 0;
		while (j < size)
		{
			temp[j] = input[k] - '0';
			j++;
			k += 2;
		}
		parsed_input[i] = temp;
		i++;
	}
	return (parsed_input);
}

int	**create_grid(int size)
{
	int	**grid;
	int	*row;
	int	i;
	int	j;
	
	grid = malloc(size * sizeof(int *));
	if (!grid)
		return NULL;
	i = 0;
	while (i < size)
	{
		row = malloc(size * sizeof(int));
		if (!row)
			return NULL;
		j = 0;
		while (j < size)
		{
			row[j] = 0;
			j++;
		}
		grid[i] = row;
		i++;
	}
	return (grid);
}
