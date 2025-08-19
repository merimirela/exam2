/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 19:47:29 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/15 20:18:29 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	i = 2;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num == 1)
			printf("1");
		while (num >= i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num != i)
					printf ("*");
				num = num / i;
			}
			else
				i++;
		}
	}
	printf("\n");
	return (0);
}
