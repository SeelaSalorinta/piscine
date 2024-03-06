/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:00:09 by ssalorin          #+#    #+#             */
/*   Updated: 2024/02/21 17:06:24 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    char myString[]="hkjr5";
    ft_str_is_alpha(myString);
    printf("%d", ft_str_is_alpha(myString));
}
