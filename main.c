#include <unistd.h>
#include <stdio.h>

int	validate_input(char *input);
char	**parse_input(char *input, int size);
void	free_2d_array(char **arr);

int	main(int argc, char *argv[])
{
	int	grid_size;
	char	**parsed_input;
	char	**grid;
	
	if (argc == 2 && validate_input(argv[1]))
	{
		grid_size = validate_input(argv[1]);
		printf("grid_size = %d \n", grid_size);
		parsed_input = parse_input(argv[1], grid_size);
		free_2d_array(parsed_input);
	}
	else
	{
		write(1, "ERROR", 5);
	}
	write(1, "\n", 1);
	return (0);
}
