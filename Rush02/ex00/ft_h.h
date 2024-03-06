/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:14:28 by vkuznets          #+#    #+#             */
/*   Updated: 2024/03/03 16:20:46 by vkuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# define DICT "./numbers.dict"

typedef struct s_stock_str
{
	char	*key;
	char	*value;
}	t_stock_str;

int		ft_strlen(char *str);
char	*ft_strndup(char *str, int n);
void	ft_putstr(char *str);

#endif
