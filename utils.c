int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_sqrt(int nb)
{
	int	i;
	
	i = 0;
	while (i <= (nb / 2))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
