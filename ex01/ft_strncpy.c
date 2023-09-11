char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include<stdio.h>

int main(void)
{
	char dest[] = "Berat";
	char src[] = "Enes";
	unsigned int n = 4;
	ft_strncpy(dest, src, n);
	printf("%s", dest);
}

		
