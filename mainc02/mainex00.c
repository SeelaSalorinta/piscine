/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:22:25 by ssalorin          #+#    #+#             */
/*   Updated: 2024/02/20 17:22:46 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char destination[] = "";
	char source[] = "omg456";
	
	ft_strcpy(destination, source);
	printf("%s", destination);
}
