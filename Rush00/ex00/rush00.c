/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:41:43 by aklimchu          #+#    #+#             */
/*   Updated: 2024/02/18 13:02:39 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char a, char b, char c, int x);

int	rush(int x, int y)
{
	int	i;

	i = 1;
	ft_putchar('o', '-', 'o', x);
	while (i <= (y - 2))
	{
		ft_putchar('|', ' ', '|', x);
		i = i + 1;
	}
	if (y >= 2)
	{
		ft_putchar('o', '-', 'o', x);
	}
	return (0);
}
