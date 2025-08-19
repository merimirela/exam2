/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 05:23:51 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/16 05:30:15 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	if (argc == 2)
	{
		while(argv[1][count])
			count++;
		while(argv[1][count - 1] > 0)
		{
			write(1, &argv[1][count - 1], 1);
			count--;
		}	
	}
	write(1, "\n", 1);
	return(0);
}
