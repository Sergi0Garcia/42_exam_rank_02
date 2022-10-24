/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:35:41 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 17:47:48 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_in_set(char c, char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void check_first_ocurrance(char *str, int idx)
{
	char c;
	int counter;
	int i;

	c = str[idx];
	counter = 0;
	i = 0;
	while (str[i] && i < idx)
	{
		if (str[i] == c)
			counter++;
		i++;
	}
	if (counter == 0)
		write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (is_in_set(argv[1][i], argv[2]))
				check_first_ocurrance(argv[1], i);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}