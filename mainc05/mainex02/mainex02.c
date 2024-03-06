/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:09:49 by ssalorin          #+#    #+#             */
/*   Updated: 2024/03/04 14:09:56 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

#include <stdio.h>

int	main()
{
    printf("%d\n", ft_iterative_power(4,4));
    printf("%d\n", ft_iterative_power(1,1));
    printf("%d\n", ft_iterative_power(2,0));
    printf("%d\n", ft_iterative_power(4,-2));
}
