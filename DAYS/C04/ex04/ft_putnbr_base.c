/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:50:53 by sfaraji           #+#    #+#             */
/*   Updated: 2026/08/22 09:56:16 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base_len(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		len;

	if (!ft_is_valid_base(base))
		return ;
	n = nbr;
	len = ft_base_len(base);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= len)
		ft_putnbr_base(n / len, base);
	ft_putchar(base[n % len]);
}
