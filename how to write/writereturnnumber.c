#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}


int main(void)
{
    int result;
    char myString[]="dsfdfs";
    ft_str_is_alpha(myString);
    result = (ft_str_is_alpha(myString));
    if (result == 1)
    {
        write (1, "1", 1);
    }
    else
    {
        write (1, "0", 1);
    }
}
