/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:35:52 by drosales          #+#    #+#             */
/*   Updated: 2024/03/09 13:21:06 by drosales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	lt;

	i = 0;
	lt = 1;
	while (str[i] != '\0')
	{
		if (lt == 1 && (str[i] >= 97 && str[i] <= 122))
			str[i] -= 32;
		else if (lt == 0 && (str[i] >= 65 && str[i] <= 90))
			str[i] += 32;
		if ((str[i] < 48) || (str[i] > 57 && str[i] < 65))
			lt = 1;
		else if ((str[i] > 90 && str[i] < 97) || (str[i] > 122))
		{
			lt = 1;
		}
		else
		{
			lt = 0;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	str[62] = "salut, comment tu vas? 42mots quarante-deux";

	printf("BEFORE\n\tsrc: %s\n", str);
	ft_strcapitalize(str);
	printf("AFTER\n\tsrc: %s\n", str);
	return (0);
}
*/
