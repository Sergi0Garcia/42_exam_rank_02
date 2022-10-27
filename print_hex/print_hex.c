/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:22:58 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/27 10:43:13 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_atoi(char *str)
{
	int num;
	int i;

	num = 0;
	i = 0;
	while (str[i])
	{
		num = num * 10 + ((str[i]) - '0');
		i++;
	}
	return (num);
}



void print_hex(int num)
{
	char hex_digits[] = "0123456789abcdef";

	if (num > 16)
		print_hex(num / 16);
	write(1, &hex_digits[num % 16], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}