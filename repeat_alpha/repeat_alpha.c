/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:30:21 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 14:40:37 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
		{
			j = argv[1][i] - 'a';
			while (j > 0)
			{
				write(1, &argv[1][i], 1);
				j--;
			}
		}
		else if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
		{
			j = argv[1][i] - 'A';
			while (j > 0)
			{
				write(1, &argv[1][i], 1);
				j--;
			}
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1,"\n", 1);
}