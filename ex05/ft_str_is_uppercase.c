int	ft_str_is_uppercase(char *str)
{
	int i = 0;
	int check = 1;

	while (str[i])
	{
		if (!('A' <= str[i] && 'Z' >= str[i]))
		{
			check = 0;
		}
	i++;
	}
	return (check);
}
