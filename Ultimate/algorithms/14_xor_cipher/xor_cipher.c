/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::  */
/*   xor_cipher.c                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+    */
/*   By: cl9u <cl9u@student.1337.ma>               +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+          */
/*   Created: 2026/08/06 00:00:00 by cl9u                        #+#    #+#             */
/*   Updated: 2026/08/06 00:00:00 by cl9u                       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*
** Subject: see subject.html in this folder.
**
** Prototype(s) to implement:
**   unsigned char *ft_xor_cipher(unsigned char *data, int len, char *key);
**
** TODO: implement this exercise.
** Trace it by hand on paper first before writing any code.
*/

unsigned char *ft_xor_cipher(unsigned char *data, int len, char *key)
{
	unsigned int i;
	unsigned int j;
	unsigned char k;

	if (!data || !key || len <= 0)
		return (data);
	if (key[0] == '\0')
		return (data);
	i = 0;
	j = 0;
	while (i < len)
	{
		k = (unsigned char)key[j];
		data[i] ^= k;
		i++;
		j++;
		if (key[j] == '\0')
			j = 0;
	}
	
	return (data);
}

int	main(void)
{
	char			str[] = "ABC ABC skdjaw jdoi jiqw";
	char			key[] = "ABC";
	int				len;

	len = strlen(str);

	printf("Original: %s\n", str);

	ft_xor_cipher((unsigned char *)str, len, key);

	printf("XOR: ");
	for (int i = 0; i < len; i++)
		printf("%02X ", (unsigned char)str[i]);
	printf("\n");

	ft_xor_cipher((unsigned char *)str, len, key);

	printf("Decoded: %s\n", str);

	return (0);
}

