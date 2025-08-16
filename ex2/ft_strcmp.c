/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 23:03:57 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/11 23:26:45 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while((s1[i] || s2[i]) && s1[i] == s2[i])
	{
			i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d", ft_strcmp("aaaab", "aaaaa"));
	return (0);
}
