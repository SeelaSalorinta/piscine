/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex05.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:44:02 by ssalorin          #+#    #+#             */
/*   Updated: 2024/03/04 16:28:15 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int x;
    int i;

    x = 1;
    i = 0;
    while (nb > 0 && nb <= 2147483647)
    {
        nb = nb - x;
        x++;
        x++;
        i++;
    }
    if (nb == 0)
    {
        return (i);
    }
    else
    {
        return (0);
    }
}

#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_sqrt(2147483648));
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(-9));
    printf("%d\n", ft_sqrt(9));
}
