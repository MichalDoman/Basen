#include <stdio.h>

int	ft_strlen(char *str);
int	ft_sqrt(int nb);

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
