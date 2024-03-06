/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:59:14 by ssalorin          #+#    #+#             */
/*   Updated: 2024/03/04 16:59:18 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
    if (index == 0)
    {
        return (0);
    }
    if (index < 3)
    {
        return (1);
    }
    if (index < 0)
    {
        return (-1);
    }
    while (index > 0)
    {
        index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
        return (index);
    }
}

#include <stdio.h>

int main()
{
    printf("%d\n", ft_fibonacci(0));
    printf("%d\n", ft_fibonacci(5));
    printf("%d\n", ft_fibonacci(8));
    printf("%d\n", ft_fibonacci(9));
}
