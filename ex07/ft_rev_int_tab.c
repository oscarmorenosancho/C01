/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:54:55 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/17 10:36:47 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	index;
	int	mid;
	int	last;

	mid = size / 2;
	last = size - 1;
	index = 0;
	while (index < mid)
	{
		aux = tab[index];
		tab[index] = tab[last - index];
		tab[last - index] = aux;
		index++;
	}
}
