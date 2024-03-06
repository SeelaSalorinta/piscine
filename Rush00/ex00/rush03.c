/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:51:14 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/18 13:03:23 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char a, char b, char c, int x);

int	rush(int x, int y)
{
	int	i;

	i = 1;
	ft_putchar('A', 'B', 'C', x);
	while (i <= (y - 2))
	{
		ft_putchar('B', ' ', 'B', x);
		i = i + 1;
	}
	if (y >= 2)
	{
		ft_putchar('A', 'B', 'C', x);
	}
	return (0);
}
