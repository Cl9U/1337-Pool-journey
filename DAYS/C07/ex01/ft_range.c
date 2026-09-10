/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 21:08:28 by sfaraji           #+#    #+#             */
/*   Updated: 2026/08/29 09:34:41 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	avr;
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	avr = max - min;
	arr = malloc(avr * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < avr)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
