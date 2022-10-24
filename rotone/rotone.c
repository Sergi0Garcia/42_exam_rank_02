/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:00:19 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 15:05:14 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
			{
				c = (argv[1][i] - 'a' + 1) % 26 + 'a';
				write(1, &c, 1);
			}
			else if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
			{
				c = (argv[1][i] - 'A' + 1) % 26 + 'A';
				write(1, &c, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}