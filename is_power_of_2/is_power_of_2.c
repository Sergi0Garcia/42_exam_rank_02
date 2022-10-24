/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:48:30 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 18:00:28 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// 2^1 = 2;
// 2^2 = 4;
// 2^3 = 2*2*2 = 8;

int	    is_power_of_2(unsigned int n)
{
	unsigned int num;

	num = 2;
	while (num <= n)
	{
		if (num == n)
			return (1);
			num *= 2;
	}
	return (0);
}

int main (void)
{
	printf("%i\n", is_power_of_2(3)); //no
	printf("%i\n", is_power_of_2(4)); //yes
	printf("%i\n", is_power_of_2(7)); //no
	printf("%i\n", is_power_of_2(32)); //yes
	return (0);
}