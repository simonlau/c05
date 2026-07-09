/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:31:37 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/09 15:29:11 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#define FALSE 0
#define TRUE 1

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
	{
		return (TRUE);
	}
	else if (nb <= 1 || nb % 2 == 0)
	{
		return (FALSE);
	}
	i = 3;
	while (i < nb / 2)
	{
		if (nb % i == 0)
		{
			return (FALSE);
		}
		i += 2;
	}
	return (TRUE);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
	{
		return (2);
	}
	else if (ft_is_prime(nb))
	{
		return (nb);
	}
	i = nb + 1;
	while (i < INT_MAX)
	{
		if (ft_is_prime(i))
		{
			return (i);
		}
		i += 2;
	}
	return (-99);
}
