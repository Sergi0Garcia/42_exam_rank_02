/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:26:19 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 14:29:39 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int  main(void)
// {
// 	int num1;
// 	int num2;

// 	num1 = 10;
// 	num2 = 20;
// 	ft_swap(&num1, &num2);
// 	printf("%i\n", num1);
// 	printf("%i\n", num2);
// 	return (1);
// }