/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:30:55 by ssalorin          #+#    #+#             */
/*   Updated: 2024/03/04 13:31:01 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
    if (nb < 0)
	{
		return (0);
	}
	if (nb != 0)
	{
		nb = nb * (ft_recursive_factorial(nb - 1));
		return (nb);
	}
	return (1);
}

#include <stdio.h>

int main()
{
    printf("%d\n", ft_recursive_factorial(4));
    printf("%d\n", ft_recursive_factorial(5));
    printf("%d\n", ft_recursive_factorial(-2));
    printf("%d\n", ft_recursive_factorial(0));
}
