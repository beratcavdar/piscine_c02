int	ft_str_is_alpha(char *str)
{
	int i = 0;
	int check = 1;
	while (str[i])
	{
		if ('A' > str[i] || 'Z' < str[i] && 'a' > str[i] || 'z' < str[i])
		{
			check = 0;
		}
		i++;
	}
	return (check);
}
