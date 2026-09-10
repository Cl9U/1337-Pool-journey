/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 20:07:27 by sfaraji           #+#    #+#             */
/*   Updated: 2026/08/17 13:42:19 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	int				i;
	unsigned char	c;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c < 32 || c > 126)
		{
			write(1, "\\", 1);
			write(1, &hex[c / 16], 1);
			write(1, &hex[c % 16], 1);
		}
		else
			write(1, &c, 1);
		i++;
	}
}
