/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejarosi <ejarosi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:28:30 by ejarosi           #+#    #+#             */
/*   Updated: 2024/02/25 15:31:55 by ejarosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_putchar (char *str)
{
	while (*str!= '\0')
	{
		write(1, str, 1);
			str++;
	}
}
