/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:15:00 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/08 15:20:03 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);
}

int	main(void)
{
	unsigned char bit;
	unsigned char res;

	res = reverse_bits((unsigned char)'M');

	int i = 8;
	while (i--)
	{
	bit = (res >> i & 1) + 48;
	printf("%c", bit);
	}
}
