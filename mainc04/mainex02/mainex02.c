/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:58:03 by ssalorin          #+#    #+#             */
/*   Updated: 2024/02/29 09:20:19 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_write('-');
		ft_write('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_write('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_write(nb + 48);
	}
}

int main(void)
{
    ft_putnbr(-21);
    ft_write('\n');
    ft_putnbr(21);
    ft_write('\n');
    ft_putnbr(0);
    return (0);
}
