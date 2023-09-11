int	ft_str_is_lowercase(char *str)
{
	int i = 0;
	int check = 1;
	
	while (str[i])
	{
		if (!(str[i] <= 'z' && str[i] >= 'a'))
			       check = 0;
	i++;
	}
	return (check);
}	
