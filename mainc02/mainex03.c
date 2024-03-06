/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:29:21 by ssalorin          #+#    #+#             */
/*   Updated: 2024/02/22 08:30:43 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
 {
     char    myString[] = "2334";
     ft_str_is_numeric(myString);
     printf("%d", ft_str_is_numeric(myString));
 }
