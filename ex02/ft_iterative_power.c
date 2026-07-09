/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 13:02:29 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/09 13:02:29 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	result = nb;
	i = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
