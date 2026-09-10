/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaraji <sfaraji@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:16:31 by sfaraji           #+#    #+#             */
/*   Updated: 2026/08/26 14:48:29 by sfaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sum;

	sum = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
	{
		sum *= nb;
	}
	return (sum);
}
