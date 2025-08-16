/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:45:52 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/11 20:55:28 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		if (argv[2][0] == '-')
                        printf("%d", atoi(argv[1]) - atoi(argv[3]));
		if (argv[2][0] == '*')
                        printf("%d", atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '/')
                        printf("%d", atoi(argv[1]) / atoi(argv[3]));
		if (argv[2][0] == '%')
                        printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
}
