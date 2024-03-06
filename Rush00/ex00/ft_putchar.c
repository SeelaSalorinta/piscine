/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:45:01 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/17 12:05:01 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char a, char b, char c, int x)
{
	int	i;

	i = 1;
	write (1, &a, 1);
	while (i <= (x - 2))
	{
		write (1, &b, 1);
		i = i + 1;
	}
	if (x >= 2)
	{
		write (1, &c, 1);
	}
	write (1, "\n", 1);
	return (0);
}
