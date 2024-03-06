/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:55:43 by ssalorin          #+#    #+#             */
/*   Updated: 2024/02/25 16:00:49 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	grid(int x, int y)
{
	int	n;

	n = 0;
	while (n < x)
	{
		write (1, "\n", 1);
		n++;
		int	j;

		j = 0;
		while (j < y)
		{
			write (1, "0 ", 2);
			j++;
		}
	}
}

int	main(void)
{
	int	x;
	int	y;

	x = 4;
	y = 4;
	grid(x, y);
	return (0);
}

