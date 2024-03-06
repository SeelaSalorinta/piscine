/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:07:05 by ssalorin          #+#    #+#             */
/*   Updated: 2024/02/22 12:07:14 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    char    myString[]="";
    ft_str_is_lowercase(myString);
    printf("%d", ft_str_is_lowercase(myString));
}
