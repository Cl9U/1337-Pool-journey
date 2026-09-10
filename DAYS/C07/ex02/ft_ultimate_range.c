/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 21:08:31 by sfaraji           #+#    #+#             */
/*   Updated: 2026/08/29 09:45:35 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	avr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	avr = max - min;
	*range = malloc(avr * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < avr)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (avr);
}
