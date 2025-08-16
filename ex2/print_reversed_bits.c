/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_reversed_bits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 17:13:34 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/08 17:53:24 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//TODO REVERSE STRATEGY
unsigned char	print_reversed_bits(unsigned char octet)
{
	int	i;
	unsigned char bit;

	i = 8;
	bit = 0;
	
	while (i--)
	{
		bit = (octet >> i & 1) + 48;
		write(1, &bit, 1);
	}
	return(bit);	
}

int	main(void)
{
	print_reversed_bits(3);
	return (0);
}
