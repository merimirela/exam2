/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 23:35:13 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/11 23:57:30 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%zu", ft_strcspn("abcdef", "c"));
	return (0);
}
