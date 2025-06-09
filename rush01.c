#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	ft_sqrt(int nb);
void	put_2d_array(int **arr, int size);

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
 	grid_size = ft_sqrt((len + 1) / 2);
 	if (grid_size)
 		return (grid_size);
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
			temp[j] = (int)(input[k] - '0');
			j++;
			k += 2;
		}
		parsed_input[i] = temp;
		i++;
	}
	put_2d_array(parsed_input, size);
	return (parsed_input);
}
