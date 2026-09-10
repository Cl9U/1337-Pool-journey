/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::  */
/*   rle.c                                   :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+    */
/*   By: cl9u <cl9u@student.1337.ma>               +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+          */
/*   Created: 2026/08/06 00:00:00 by cl9u                        #+#    #+#             */
/*   Updated: 2026/08/06 00:00:00 by cl9u                       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_rle_encode(char *str)
{
	int i;
	int count;
	char c;

	i = 0;
	while (str[i])
	{
		count = 0;
		while ( str[i + count] == str[i])
			count++;
		if (count > 1)
		{
			c = count + '0';
			write (1, &str[i], 1);
			write(1, &c, 1);
		}
		else
			write (1, &str[i], 1);
		i += count;
	}
	
	return (NULL);
}
int main()
{
	char str[] = "aaabbc";
	ft_rle_encode(str);
}


