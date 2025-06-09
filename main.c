#include <unistd.h>
#include <stdio.h>

int	validate_input(char *input);

int	main(int argc, char *argv[])
{
	int	grid_size;	
	printf("argv[1] = \"%s\" \n", argv[1]);
	if (argc == 2 && validate_input(argv[1]))
	{
		grid_size = validate_input(argv[1]);
		printf("grid_size = %d \n", grid_size);
	}
	else
	{
		write(1, "ERROR", 5);
	}
	write(1, "\n", 1);
	return (0);
}
