/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpirkola <hpirkola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:28:55 by hpirkola          #+#    #+#             */
/*   Updated: 2024/03/03 19:39:19 by hpirkola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	count_lines(char *ptr)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == '\n')
			result++;
		i++;
	}
	return (result);
}

int	*ft_to_struct(char *str, t_stock_str *s, int t)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		len++;
		i++;
	}
	s[t].key = ft_strndup(str, len);
	len = 0;
	while (*str == ' ' || *str == ':' || (*str >= '0' && *str <= '9'))
	{
		str++;
	}
	while (str[j] != '\0')
	{
		if (str[j] == ' ')
		{
			j++;
			continue ;
		}
		len++;
		j++;
	}
	s[t].value = ft_strndup(str, len);
	return (0);
}

int	ft_len_line(char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i] != '\n')
		i++;
	return (i);
}

t_stock_str	*ft_to_arr(char *ptr)
{
	char		*str;
	t_stock_str	*s;
	int			lines;
	int			len;
	int			i;
	int			t;

	t = 0;
	lines = count_lines(ptr);
	s = malloc(sizeof(t_stock_str *) * (lines + 1));
	while (t < lines - 1)
	{
		len = ft_len_line(ptr);
		str = malloc(sizeof(char) + (len + 1));
		i = 0;
		while (i < len)
		{
			str[i] = *ptr;
			ptr++;
			i++;
		}
		str[i] = '\0';
		ft_to_struct(str, s, t);
		t++;
		ptr++;
		free(str);
	}
	return (s);
}

t_stock_str	*ft_r(void)
{
	int		fd;
	int		sz;
	char	*ptr;

	fd = open(DICT, O_RDONLY);
	ptr = malloc(sizeof(char) * 1000);
	if (ptr == NULL)
		return (NULL);
	if (fd < 0)
	{
		ft_putstr("Open error");
	}
	sz = read(fd, ptr, 1000);
	if (sz < 0)
	{
		ft_putstr("Read error");
	}
	close(fd);
	ptr[sz] = '\0';
	return (ft_to_arr(ptr));
}

int	main(int argc, char **argv)
{
	char	*nb;
	t_stock_str	*s;

	if (argc == 2)
	{
		nb = argv[1];
		s = ft_r();
		ft_print(s, nb);
	}
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	free(s);
	return (0);
}
