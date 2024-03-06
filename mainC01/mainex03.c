/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:29:15 by ssalorin          #+#    #+#             */
/*   Updated: 2024/02/19 13:31:33 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int xdiv;
	int ymod;
	
	a = 10;
	b = 3;
	
	ft_div_mod(a, b, &xdiv, &ymod);
	
	printf("%d\n", xdiv);
	printf("%d", ymod);
}
