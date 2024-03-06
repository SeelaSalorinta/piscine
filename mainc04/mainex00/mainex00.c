/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:49:21 by ssalorin          #+#    #+#             */
/*   Updated: 2024/02/29 09:21:59 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
    int	i;

   	i = 0;
   	while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

#include <stdio.h>

int main(void)
{
    char mystring[] = "abc123";

    printf("%d", ft_strlen(mystring));
}

