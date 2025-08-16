/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:48:34 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/15 18:20:03 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char **argv)
{
 	int	i;
	int	count;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			count = 0;
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				count = argv[1][i] - 65;
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				count = argv[1][i] - 97;
			}	
			while (count >= 0)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
			i++;
		}	
	}
	write(1, "\n", 1);
}
