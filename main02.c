/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:51:17 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/16 18:27:53 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
    b = 20;	
	printf ("%d %d\n", a, b);
	ft_swap (&a, &b);
	printf ("%d %d\n", a, b);
}
