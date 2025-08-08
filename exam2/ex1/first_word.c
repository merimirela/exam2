/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:45:31 by mmirela-          #+#    #+#             */
/*   Updated: 2025/07/28 19:16:19 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		unsigned int	i;

		i = 0;
		while (argv[1][i] == 9 || argv[1][i] == ' ')
			i++;
		while (**argv && (argv[1][i] != 9 && argv[1][i] != ' '))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

