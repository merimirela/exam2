/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:21:31 by mmirela-          #+#    #+#             */
/*   Updated: 2025/07/28 21:47:28 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int	i;
	char	buffer[2];

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write (1, "fizz\n", 5);
		else if (i % 5 == 0)
			write (1, "buzz\n", 5);
		else
		{
			if (i < 10)
			{
				buffer[0] = i + '0';
				write (1, buffer, 1);
			}
			if (i >= 10)
			{
				buffer[0] = (i / 10) + '0';
				buffer[1] = (i % 10) + '0';
				write (1, buffer, 2);
			}
			write (1, "\n", 1);
		}
		i++;
	}
	return (0);
}
