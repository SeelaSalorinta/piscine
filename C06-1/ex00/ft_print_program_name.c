/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalorin <ssalorin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:28:05 by ssalorin          #+#    #+#             */
/*   Updated: 2024/03/01 11:33:20 by ssalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc >= 0)
	{
		while (argv[0][i] != '\0')
		{
			write(1, &argv[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
}
