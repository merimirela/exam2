/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:08:19 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/08 14:18:12 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 8;
	bit = 0;

	while (i--)
	{
		bit = (octet >> i & 1) + 48;
		write(1, &bit, 1);
	}
}

int	main(void)
{
	unsigned char	octet;

	octet = 'M';
	print_bits(octet);
	return (0);
}
