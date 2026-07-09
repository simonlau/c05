/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 12:10:03 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/09 12:15:21 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	reduce_case;

	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	reduce_case = nb - 1;
	return (nb * ft_recursive_factorial(reduce_case));
}
