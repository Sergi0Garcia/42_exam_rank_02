/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:17:47 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/24 10:31:36 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int i;
	int bit;

	i = 7;
	while (i >= 0)
	{
		bit = octet >> i & 1;
		if (bit == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}

int main(void)
{
	print_bits(2);
	return (0);
}