/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz_put_nbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:42:03 by mmirela-          #+#    #+#             */
/*   Updated: 2025/07/30 18:53:34 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int i)
{
	if (i >= 10)
		ft_putnbr(i / 10);
	write (1, &"0123456789"[i % 10], 1);
}

int	main(void)
{
	int	i;
	
	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else 
			ft_putnbr(i);
		i++;
		write(1, "\n", 1);
	}	
}
