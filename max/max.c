/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:08:26 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 18:15:23 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int max;

	if (*tab == '\0' || len <= 0)
		return (0);
	max = *tab;
	while (*tab)
	{
		if (*tab > max)
			max = *tab;
		tab++;
	}
	return (max);
}

int main(void)
{
	int *tab;
	tab = (int *)malloc(sizeof(int) * (5 + 1));
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 30;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = '\0';
	printf("max: %i\n", max(tab, 5));


}