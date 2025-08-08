/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:39:26 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/01 21:13:42 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//int  i, sign, result
//skip spaces/tab
//+ -
//while 0-9 result = result * 10 + (str[x] - '0');
//return (sign * result)

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	
	if (str[i] == 0 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
		


}
