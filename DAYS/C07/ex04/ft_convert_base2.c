/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 21:08:38 by sfaraji           #+#    #+#             */
/*   Updated: 2026/08/28 21:08:39 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_len(char *base);

int	ft_count_dg(long n, int blen)
{
	int	dlen;

	dlen = 1;
	while (n >= blen)
	{
		n /= blen;
		dlen++;
	}
	return (dlen);
}

char	*ft_fill_dg(char *res, long n, int dlen, char *base_to)
{
	int	blen;

	blen = ft_base_len(base_to);
	while (dlen > 0)
	{
		res[dlen - 1] = base_to[n % blen];
		n /= blen;
		dlen--;
	}
	return (res);
}

char	*ft_itoa_base(int nbr, char *base_to)
{
	long	n;
	int		blen;
	int		dlen;
	int		s;
	char	*res;

	n = nbr;
	blen = ft_base_len(base_to);
	s = (n < 0);
	if (s)
		n = -n;
	dlen = ft_count_dg(n, blen);
	res = malloc((dlen + s + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[dlen + s] = '\0';
	if (s)
		res[0] = '-';
	ft_fill_dg(res + s, n, dlen, base_to);
	return (res);
}
