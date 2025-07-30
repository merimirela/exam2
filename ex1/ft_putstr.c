/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:14:08 by mmirela-          #+#    #+#             */
/*   Updated: 2025/07/30 21:22:05 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *str)
{
	unsigned int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

/*
int	main(void)
{
	ft_putstr("Era uma vez");
	return (0);
}
*/
