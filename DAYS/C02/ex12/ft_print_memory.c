/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 20:25:10 by sfaraji           #+#    #+#             */
/*   Updated: 2026/08/17 13:51:07 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_addr(unsigned long long addr)
{
	int		i;
	char	buff[16];
	char	*hex;

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		buff[i] = hex[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, buff, 16);
	write(1, ": ", 2);
}

void	ft_print_hex(unsigned char *str, unsigned int i, unsigned int size)
{
	char				*hex;
	unsigned int		j;

	hex = "0123456789abcdef";
	j = 0;
	while (j < 16)
	{
		if (i + j < size)
		{
			write(1, &hex[str[i + j] / 16], 1);
			write(1, &hex[str[i + j] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
}

void	ft_print_ascii(unsigned char *str, unsigned int i, unsigned int size)
{
	unsigned int	j;

	j = 0;
	while (j < 16 && i + j < size)
	{
		if (str[i + j] < 32 || str[i + j] > 126)
			write(1, ".", 1);
		else
			write(1, &str[i + j], 1);
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		ft_print_addr(((unsigned long long)&str[i]));
		ft_print_hex(str, i, size);
		ft_print_ascii(str, i, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
