#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

void ft_wrt(char *str)
{
    while (*str != 0)
    {
        write (1, str, 1);
        str++;
    }
}

int	main(void)
{
	char	myString[] = "hellouu";
	ft_strupcase(myString);
	ft_wrt(myString);
}
