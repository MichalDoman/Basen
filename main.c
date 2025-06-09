#include <unistd.h>
#include <stdio.h>

int	validate_input(char *input);
int	**parse_input(char *input, int size);
int	**create_grid(int size);
void	put_2d_array(int **arr, int size);
void	free_2d_array(int **arr);

int	main(int argc, char *argv[])
{
	int	grid_size;
	int	**parsed_input;
	int	**grid;
	
	if (argc == 2 && validate_input(argv[1]))
	{
		//get neccessary data:
		grid_size = validate_input(argv[1]);
		printf("grid_size = %d \n", grid_size);
		parsed_input = parse_input(argv[1], grid_size);
		grid = create_grid(grid_size);
		
		put_2d_array(grid, grid_size);
			
		// free malloc'ed arrays:
		free_2d_array(parsed_input);
		free_2d_array(grid);
	}
	else
	{
		write(1, "ERROR", 5);
	}
	return (0);
}
