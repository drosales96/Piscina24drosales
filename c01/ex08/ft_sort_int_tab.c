/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:02:53 by drosales          #+#    #+#             */
/*   Updated: 2024/03/06 10:48:12 by drosales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab [i] = tab [j];
				tab [j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
    int c[5]={27,1,2,3,4};
    int d=5;
    int i=0;
    int division;
    int modulo;
    while (i<5)
    {
        printf("%d ", c[i]);
        i++;
    }

    ft_sort_int_tab(c,d);
	i=0;
    while (i<5)
    {
        printf("%d ", c[i]);
        i++;
    }
    return (0);
}
*/
