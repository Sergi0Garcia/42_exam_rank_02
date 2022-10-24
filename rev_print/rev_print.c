/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:41:34 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 14:47:22 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int len;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	len = ft_strlen(argv[1]) - 1;
	while (len >= 0)
	{
		write(1, &argv[1][len], 1);
		len--;
	}
	write(1, "\n", 1);
}