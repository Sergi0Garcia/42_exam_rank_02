/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:48:06 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 14:59:35 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// z = 122 % 122 = 0 + 13 + 97 - 1;
// m = 109
#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	char c;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
		{
			c = (argv[1][i] - 'a' + 13) % 26 + 'a';
			write(1, &c, 1);
		}
		else if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
		{
			c = (argv[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &c, 1);
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

