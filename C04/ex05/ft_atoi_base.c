int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	if (i == 1)
		return (0);
	return (i);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;

	if (!is_base_valid)
		return (0);
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	base_len = 0;
	while (base[base_len])
		base_len++;
	result = 0;
	while (is_in_base(str[i], base) >= 0)
	{
		result = result * base_len + is_in_base(str[i], base);
		i++;
	}
	return (result * sign);
}

#include <stdio.h>

int	main(void)
{
	char	*str_1;
	char	*str_2;
	char	*str_3;
	char	*base;

	str_1 = "   ---+--+1234ab5";
	str_2 = " - -123";
	str_3 = "\t\t ---321 123";
	base = "0123456789abcdef";
	printf("str_1 -> %d \n", ft_atoi_base(str_1, base));
	printf("str_2 -> %d \n", ft_atoi_base(str_2, base));
	printf("str_3 -> %d \n", ft_atoi_base(str_3, base));
	return (0);
}
