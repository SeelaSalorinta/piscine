/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:27:28 by ssalorin          #+#    #+#             */
/*   Updated: 2024/02/29 09:18:43 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	minusorplus;
	int	finalnumber;

	a = 0;
	minusorplus = 1;
	finalnumber = 0;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == 32
		|| str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
		{
			minusorplus = minusorplus * -1;
		}
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		finalnumber = finalnumber * 10 + (str[a] - '0');
		a++;
	}
	return (minusorplus * finalnumber);
}
