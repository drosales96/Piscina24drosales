/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:00:14 by drosales          #+#    #+#             */
/*   Updated: 2024/03/19 09:53:54 by drosales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (sqrt == 0)
	{
		return (0);
	}
	while (sqrt * sqrt < nb)
		sqrt++;
	if ((nb % sqrt) == 0)
	{
		return (sqrt);
	}
	else
	{
		return (0);
	}
}
/*
# include <stdio.h>

int main(void)
{
	printf("%d",ft_sqrt(8));
	return (0);
}
*/
