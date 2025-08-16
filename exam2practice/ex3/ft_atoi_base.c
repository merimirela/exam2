/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 00:25:06 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/16 03:05:52 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	isvalid(int c, int baselen)
{
	char *lcbase = "0123456789abcdef";
	char *ucbase = "0123456789ABCDEF";
	int	i;

	i = 0;
	while (i < baselen)
	{
		if (c == lcbase[i] || c == ucbase[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && isvalid(str[i], str_base))
	{
		result = result * str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result = result + str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			result = result + str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result = result + str[i] - 'A' + 10;
		i++;
	}
	return (sign * result);
}

int	main(void)
{
	printf("%d", ft_atoi_base("   -12345F", 16));
	return (0);
}

