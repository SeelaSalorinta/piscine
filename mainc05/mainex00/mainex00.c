/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:03:42 by ssalorin          #+#    #+#             */
/*   Updated: 2024/03/04 16:49:39 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

#include <stdio.h>

int main()
{
    printf("%d\n", ft_iterative_factorial(4));
    printf("%d\n", ft_iterative_factorial(1));
    printf("%d\n", ft_iterative_factorial(-2));
    printf("%d\n", ft_iterative_factorial(0));
}
