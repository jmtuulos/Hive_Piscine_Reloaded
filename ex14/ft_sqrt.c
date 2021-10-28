/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:01:16 by jheiskan          #+#    #+#             */
/*   Updated: 2021/10/28 12:01:20 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;
	int	x;

	x = 0;
	res = 0;
	while (res < nb)
	{
		res = x * x;
		if (res == nb)
			return (x);
		x++;
	}
	return (0);
}
