/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:38:37 by drosales          #+#    #+#             */
/*   Updated: 2024/03/19 07:41:54 by drosales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (fact);
}
/*
int	main()
{
	printf("%i", ft_iterative_factorial(5));
	printf("%i", ft_iterative_factorial(0));
}
*/
