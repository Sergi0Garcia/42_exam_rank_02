/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:06:01 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 15:27:52 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int valid;

	i = 0;
	j = 0;
	valid = 0;
	if (argc == 4 && argv[1][0] && argv[2][0] && argv[3][0])
	{
		while (argv[1][i])
		{
			valid = 0;
			j = 0;
			if (argv[1][i] == argv[2][0])
			{
				while(argv[2][j])
				{
					if (argv[1][i + j] == argv[2][j])
						valid = 1;
					else
						valid = 0;
					j++;
				}
				if (valid)
					ft_print_str(argv[3]);
			}
			else if (!argv[2][1] && !argv[3][1])
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (1);
}