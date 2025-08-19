/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:33:40 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/19 17:46:45 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	n)
{
	if (n > 9)
		ft_putnbr (n / 10);
	ft_putchar((n % 10) + '0');
}

int	main(int argc, char **argv)
{
	int	count;
	count = 0;
	if (argc == 1)
		write(1, "0", 1);
	if (argc > 1)
	{
		count = argc - 1;
		ft_putnbr(count);
	}
	write (1, "\n", 1);
	return (0);
}
