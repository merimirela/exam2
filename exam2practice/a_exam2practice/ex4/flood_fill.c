/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirela- <mmirela-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:24:05 by mmirela-          #+#    #+#             */
/*   Updated: 2025/08/19 19:58:56 by mmirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void	fill(char **tab, t_point size, int x, int y, char target)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y)
		return ;
	if (tab[y][x] != target || tab[y][x] == 'F')
		return ;

	tab[y][x] = 'F';
	fill (tab, size, x + 1, y, target);
	fill (tab, size, x - 1, y, target);
	fill (tab, size, x, y + 1, target);
	fill (tab, size, x, y - 1, target);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	target = tab[begin.y][begin.x];
	if (target == 'F')
		return;
	fill(tab, size, begin.x, begin.y, target);
}

/*
#include <stdlib.h>
#include <stdio.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
*/
