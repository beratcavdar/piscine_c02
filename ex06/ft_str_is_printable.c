int	ft_str_is_printable(char *str)
{
	int i = 0;
	int check = 1;

	while (str[i])
	{
		if (!(33 <= str[i] && 126 >= str[i]))
		{
			check = 0;
		}
	i++;
	}
	return (check);
}
