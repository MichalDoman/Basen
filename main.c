#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		write(1, "Main function", 13);
	}
	else
	{
		write(1, "ERROR", 5);
	}
	write(1, "\n", 1);
	return (0);
}
