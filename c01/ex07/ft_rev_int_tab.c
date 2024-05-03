/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:33:02 by drosales          #+#    #+#             */
/*   Updated: 2024/03/06 10:31:12 by drosales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	i2;

	i = 0;
	i2 = size -1;
	while (i < i2)
	{
		tmp = tab[i];
		tab[i] = tab[i2];
		tab[i2] = tmp;
		i ++;
		i2--;
	}
}
/*
#include <stdio.h>

int main(void)
{
    int c[5]={0,1,2,3,4};
    int d=5;
	int i=0;
//    int division;
//    int modulo;

    ft_rev_int_tab(c,d);
	while (i<5)
	{
		printf("%d ", c[i]);
		i++;
	}
    return (0);
}
*/
