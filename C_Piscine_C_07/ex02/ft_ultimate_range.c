/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:36:39 by amassey           #+#    #+#             */
/*   Updated: 2020/02/25 13:25:54 by amassey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	int *tab;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * (size + 1));
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = '\0';
	*range = tab;
	return (i);
}
