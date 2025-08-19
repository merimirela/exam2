/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:51:17 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/19 16:13:55 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		max(int* tab, unsigned int len)
{
	int	max;

	max = 0;
	if (tab == 0 || len == 0)
		return (0);
	while (len > 0)
	{
		if (tab[len] > max)
			max = tab[len];
		len--;
	}
	return (max);
}

/*
int	main(void)
{
	int	tab[] = {1, 2, 5, 3, 4};
	unsigned len = 5;

	printf("%d", max( tab, len));
	return (0);
}
*/
