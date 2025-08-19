/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:35:48 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/19 15:48:57 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc,char **argv)
{
	int	i;
	int	count;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			count = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				count = argv[1][i] - 'a';
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				count = argv[1][i] - 'A';
			while (count >= 0)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
