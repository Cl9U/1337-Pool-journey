/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 10:43:15 by sfaraji           #+#    #+#             */
/*   Updated: 2026/08/13 10:43:17 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	str[10];
	long	n;
	int		len;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	len = 0;
	while (n > 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
		len++;
	}
	len--;
	while (len >= 0)
		write(1, &str[len--], 1);
}
