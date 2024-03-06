/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:18:04 by ssalorin          #+#    #+#             */
/*   Updated: 2024/03/04 15:29:25 by ssalorin         ###   ########.fr       */
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
