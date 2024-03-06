/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:15:41 by ssalorin          #+#    #+#             */
/*   Updated: 2024/02/21 14:44:25 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char destination[] = "fgg22";
	char source[] = "omg45";
	
	ft_strncpy(destination, source, 3);
	printf("%s\n", destination);
	printf("%s", strncpy(destination, source, 3));
}
