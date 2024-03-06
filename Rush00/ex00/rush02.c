/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:49:37 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/18 13:03:11 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char a, char b, char c, int x);

int	rush(int x, int y)
{
	int	i;

	i = 1;
	ft_putchar('A', 'B', 'A', x);
	while (i <= (y - 2))
	{
		ft_putchar('B', ' ', 'B', x);
		i = i + 1;
	}
	if (y >= 2)
	{
		ft_putchar('C', 'B', 'C', x);
	}
	return (0);
}
