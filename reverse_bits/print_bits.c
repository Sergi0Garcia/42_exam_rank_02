/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:45:32 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/24 10:56:55 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int bit;
	int i;
	unsigned char res;

	i = 7;
	res = 0;
	while (i >= 0)
	{
		bit = octet >> i & 1;
		if (bit == 0)
			res |= 1 << i;
		i--;
	}
	return (res);
}

int main(void)
{
	printf("%c\n", reverse_bits('a'));
	return (0);
}