/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:14:07 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/24 12:27:29 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int num;
	int sign;
	int brk;

	sign = 1;
	num = 0;
	brk = 0;
	if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && brk == 0)
	{
		if (*str >= '0' && *str <= '9')
			num = num * 10 + (*str - '0');
		else
			brk = 1;
		str++;
	}
	return (num * sign);
}

int main(void)
{
	char str[] = "-112121";
	printf("%i\n", atoi(str));
	printf("%i\n", ft_atoi(str));
}