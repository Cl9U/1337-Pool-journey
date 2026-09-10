/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 11:36:38 by sfaraji           #+#    #+#             */
/*   Updated: 2026/09/02 21:28:23 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*temp;
	int		skip;
	int		i;

	if (!tab)
		return ;
	skip = 1;
	while (skip)
	{
		i = 1;
		skip = 0;
		while (tab[i])
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				temp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = temp;
				skip = 1;
			}
			i++;
		}
	}
}
