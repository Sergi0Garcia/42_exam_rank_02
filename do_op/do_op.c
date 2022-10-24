/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:54:47 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 16:01:36 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int num1;
	int num2;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			printf("%d", num1 + num2);
		else if (argv[2][0] == '-')
			printf("%d", num1 - num2);
		else if (argv[2][0] == '*')
			printf("%d", num1 * num2);
		else if (argv[2][0] == '/')
			printf("%d", num1 / num2);
		else if (argv[2][0] == '%')
			printf("%d", num1 % num2);
	}
	write(1, "\n", 1);
	return (0);
}