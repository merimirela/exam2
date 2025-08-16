/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 18:53:53 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/15 19:24:27 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nbr)
{
	char	c;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	count;
	char	c;

	count = 0;
	if (argc == 1)
	{
		write(1, "0", 1);
	}
	if (argc > 1)
	{
		ft_putnbr(argc - 1);	
	}
	write(1, "\n", 1);
}
