/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:58:37 by vkuznets          #+#    #+#             */
/*   Updated: 2024/03/03 19:40:13 by hpirkola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

char	*ft_strndup(char *str, int n)
{
	char	*dest;
	int		i;
	int		j;

	j = 0;
	i = 0;
	dest = malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	while (str[j] != '\0' && j < n)
	{
		if (str[j] == ' ')
		{
			j++;
			continue ;
		}
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

void	ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print(t_stock_str *s, char *input)
{
	int	i;

	i = 0;
	while (s[i].key != '\0')
	{
		if (ft_strcmp(s[i].key, input) == 0)
		{
			ft_putchar(s[i].value);
			break;
		}
		i++;
	}
}
