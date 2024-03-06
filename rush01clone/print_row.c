/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejarosi <ejarosi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:46:00 by ejarosi           #+#    #+#             */
/*   Updated: 2024/02/25 10:49:08 by ejarosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	functionname(int x, int y)
{
	int n;

	n = 0;

	while (n < x)
	{   printf("\n");
		n++;
		
		int j;
		j = 0;

		while (j < y)
		{
			printf("%d ", 0);
			j++;
		}
	}
	return (0);
}

int	main (void)
{	int x;
	int y;

	x = 4;
	y = 4;

	functionname (x, y);
	return (0);
}
