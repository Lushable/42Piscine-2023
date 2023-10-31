/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flus <flus@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 01:48:22 by flus              #+#    #+#             */
/*   Updated: 2023/07/30 01:49:09 by flus             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int prime)
{
	unsigned int	i;

	i = 2;
	if (prime <= 1)
		return (0);
	while (i * i <= prime)
	{
		if (prime % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
