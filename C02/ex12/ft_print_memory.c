#include <unistd.h>

void	print_address(unsigned long addr, int count)
{
	char	*hex;
	
	hex = "0123456789abcdef";
	if (count < 16)
		print_address(addr / 16, count + 1);
	write(1, &hex[addr % 16], 1);
	if (count == 1)
		write(1, ": ", 2);
}

void	print_hexes(unsigned char *str, int	start, int size)
{
	int	i;
	char	*hex;
	
	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			write(1, &hex[str[i + start] / 16], 1);
			write(1, &hex[str[i + start] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (i != 0 && (i + 1) % 2 == 0)
			write(1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_left;
	unsigned int	length;

	i = 0;
	size_left = size;
	length = 16;
	while (i <= size)
	{
		if (size_left < 16)
			length = size_left;
		print_address((unsigned long)(addr + i), 1);
		print_hexes((unsigned char *)addr, i, length);
		write(1, "\n", 1);
		i += 16;
		size_left -= length;
	}
	return (addr);
}

int	main(void)
{
	char *str;
	unsigned int	size;
	
	str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	size = 92;
	ft_print_memory(str, size);
	return (0);
}
