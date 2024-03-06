/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:53:02 by ssalorin          #+#    #+#             */
/*   Updated: 2024/03/04 11:21:13 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 0;
	x = (argc - 1);
	if (argc >= 0)
	{
		while (x >= 1)
		{
			while (argv[x][i] != '\0')
			{
				write(1, &argv[x][i], 1);
				i++;
			}
			x--;
			i = 0;
			write(1, "\n", 1);
		}
		return (0);
	}
}
