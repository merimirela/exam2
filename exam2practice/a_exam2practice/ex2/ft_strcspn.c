/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 05:33:19 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/16 06:11:04 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject)
		{
			if (s[i] == reject[j])
				return (i);
				break ;
			j++;
		}
		i++;	
	}
	return (i);
}

/*
int	main(void)
{
	printf("%zu", ft_strcspn("test", "f"));
	return (0);
}
*/
