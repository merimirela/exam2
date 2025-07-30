/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:26:52 by mmirela-          #+#    #+#             */
/*   Updated: 2025/07/30 22:15:04 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
char    *ft_strcpy(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}


char  o_strncpy(char *dest, const char *src, size_t n)

           {
               size_t i;	       
               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return (*dest);
           }


#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s = "Meri";
	char	d[100];

	printf("Mine: %s\n", ft_strcpy(d, s));
	printf("Original: %s\n", strncpy(d, s, 4));
	return (0);
}
