/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:34:05 by drosales          #+#    #+#             */
/*   Updated: 2024/03/19 09:53:20 by drosales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power != 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
	int	power = 3;
	int base = 5;
	printf("%d   %d   %d", base, power, ft_iterative_power(base, power));
	return (0);
}
*/
