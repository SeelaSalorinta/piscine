/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:20:29 by ssalorin          #+#    #+#             */
/*   Updated: 2024/03/07 12:34:47 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_createtulos(char c)
{
	char	tulos;

	if (c >= 'A' && c <= 'Z')
	{
		tulos = c + 32;
		return (tulos);
	}
	if (c >= 'a' && c <= 'z')
	{
		tulos = c - 32;
		return (tulos);
	}
	else
	{
		tulos = c;
		return (tulos);
	}
}


int	main(int argc, char *argv[])
{
	char	joku;
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			joku = ft_createtulos(argv[1][i]);
			write(1, &joku, 1);
			i++;
		}
			write(1, "\n", 1);
	}
	return (0);
}
