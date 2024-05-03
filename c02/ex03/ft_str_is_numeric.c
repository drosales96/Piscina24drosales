/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:11:58 by drosales          #+#    #+#             */
/*   Updated: 2024/03/10 09:02:38 by drosales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] < 46 || str[i] > 57)
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
}
/*
#include <stdio.h>

int	main()
{
	printf("%d ", ft_str_is_numeric("d"));
	return (0);
}
*/
