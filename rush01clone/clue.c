# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    clue                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejarosi <ejarosi@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 09:24:10 by ejarosi           #+#    #+#              #
#    Updated: 2024/02/25 09:38:45 by ejarosi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#include <stdio.h>

int clue (int n)
	
{	if (n == 1)
		return (1);

	else 
		return 1 + clue (n -1)
}

int main () {
	int n;

	n = 4;

	printf("%d", clue(n));
	return (0);
}
