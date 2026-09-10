/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 21:08:33 by sfaraji           #+#    #+#             */
/*   Updated: 2026/08/29 09:46:22 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int	nlen;
	int	i;

	i = 0;
	nlen = 0;
	while (i < size)
	{
		nlen += ft_strlen(strs[i]);
		if (i < size - 1)
			nlen += ft_strlen(sep);
		i++;
	}
	return (nlen);
}

char	*ft_emp_str(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

void	ft_join_str(char *dest, int *loc, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*loc] = src[i];
		(*loc)++;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		slen;
	int		loc;
	int		i;

	if (size == 0)
		return (ft_emp_str());
	slen = ft_strslen(size, strs, sep);
	str = malloc((slen + 1) * sizeof(char));
	i = 0;
	loc = 0;
	if (!str)
		return (NULL);
	while (i < size)
	{
		ft_join_str(str, &loc, strs[i]);
		if (i < size - 1)
			ft_join_str(str, &loc, sep);
		i++;
	}
	str[loc] = '\0';
	return (str);
}
