/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:37:03 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 15:47:55 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
				argv[1][i] = 'z' - (argv[1][i] - 'a');
			else if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
				argv[1][i] = 'Z'- (argv[1][i] - 'A');
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (1);
}