/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:57:18 by ssalorin          #+#    #+#             */
/*   Updated: 2024/03/04 16:58:31 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
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
		nb = nb * ft_recursive_power(nb, (power - 1));
		return (nb);
	}
}

#include <stdio.h>

int	main()
{
    printf("%d\n", ft_recursive_power(4,4));
    printf("%d\n", ft_recursive_power(2,0));
    printf("%d\n", ft_recursive_power(4,-4));
    printf("%d\n", ft_recursive_power(1,4));
}
