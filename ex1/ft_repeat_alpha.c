/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 23:55:51 by mmirela-          #+#    #+#             */
/*   Updated: 2025/07/31 00:30:30 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i;
	int	count;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				count = 0;
				while (count < argv[1][i] - 64)
				{
					write(1, &argv[1][i], 1);
					count++;
				}
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				count = 0;
				while (count < argv[1][i] - 96)
				{
					write(1, &argv[1][i], 1);
					count++;
				}	
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
