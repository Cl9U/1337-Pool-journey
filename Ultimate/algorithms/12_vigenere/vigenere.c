/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::  */
/*   vigenere.c                              :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+    */
/*   By: cl9u <cl9u@student.1337.ma>               +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+          */
/*   Created: 2026/08/06 00:00:00 by cl9u                        #+#    #+#             */
/*   Updated: 2026/08/06 00:00:00 by cl9u                       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char *ft_vigenere_encrypt(char *str, char *key)
{
	int i;
	int j;
	int shift;
	char c;
	char k;

	i = 0;
	j = 0;

	if (!key || key[0] == '\0')
    	return (NULL);
		
	while (str[i])
	{
		c = str[i];

		if (key[j] == '\0')
			j = 0;
		k = key[j];

		if (k >= 'A' && k <= 'Z' && k != 0)
		{
			shift = k - 'A';
		}

		if (k >= 'a' && k <= 'z' && k != 0)
		{
			shift = k - 'a';
		}

		if (c >= 'A' && c <= 'Z')
		{
			c = (c - 'A' + shift) % 26 + 'A';
			j++;
		}

		else if (c >= 'a' && c <= 'z')
		{
			c = (c - 'a' + shift) % 26 + 'a';
			j++;
		}
		write(1, &c, 1);
		i++;
	}
	
	return (NULL);
}

int main()
{
	char str[] = "ABC ABC";
	char key[] = "ABC";
	ft_vigenere_encrypt(str, key);
}
