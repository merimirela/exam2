/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 23:35:13 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/12 00:20:37 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	int	check;

	i = 0;
	while(s[i])
	{
		j = 0;
		check = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return (i);
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%zu", ft_strspn("meri", "america"));
	return (0);
}
