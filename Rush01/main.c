#include <unistd.h>
#include <stdio.h>

int	validate_input(char *input);
int	**parse_input(char *input, int size);
int	**create_grid(int size);
void	presolve(int **input, int **grid, int size);
int	solve(int **input, int **grid, int size, int start);
void	put_2d_array(int **arr, int size);
void	free_2d_array(int **arr, int size);

int	main(int argc, char *argv[])
{
	int	grid_size;
	int	**parsed_input;
	int	**grid;
	
	if (argc == 2 && validate_input(argv[1]) >= 1 
		&& validate_input(argv[1]) <= 9)
	{
		//get neccessary data:
		grid_size = validate_input(argv[1]);
		parsed_input = parse_input(argv[1], grid_size);
		grid = create_grid(grid_size);
		
		// solve & display:
		presolve(parsed_input, grid, grid_size);
		solve(parsed_input, grid, grid_size, 0);
		put_2d_array(grid, grid_size);
			
		// free malloc'ed arrays:
		free_2d_array(parsed_input, 4);
		free_2d_array(grid, grid_size);
	}
	else
	{
		write(1, "ERROR", 5);
	}
	write(1, "\n", 1);
	return (0);
}
