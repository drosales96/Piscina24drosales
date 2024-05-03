/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:25:00 by drosales          #+#    #+#             */
/*   Updated: 2024/03/06 10:29:19 by drosales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
#include <stdio.h>

int main(void)
{
	int c=11;
	int d=3;
	int division;
	int modulo;

	ft_div_mod(c,d,&division,&modulo);
	printf("%d %d", division, modulo);
	return (0);
}
*/
