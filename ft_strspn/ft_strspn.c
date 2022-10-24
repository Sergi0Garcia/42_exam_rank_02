/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:19:20 by segarcia          #+#    #+#             */
/*   Updated: 2022/10/23 17:32:40 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t j;
	int	found;

	i = 0;
	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j] && found == 0)
		{
			if (accept[j] == s[i])
				found = 1;
			j++;
		}
		if (found)
			i++;
		else
			return (i);
	}
	return (i);
}

int main ()
{
  size_t i;
  char strtext[] = "129th";
  char cset[] = "1234567890";

  i = ft_strspn (strtext,cset);
  printf ("The initial number has %d digits.\n", (int)i);
  return 0;
}