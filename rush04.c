/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sp <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:07:40 by sp                #+#    #+#             */
/*   Updated: 2023/07/30 13:03:33 by sp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	check(int j, int i, int x, int y)
{
	if ((i == 1 && j == 1) || (((i == y && j == x) && (y != 1 && x != 1))))
	{
		ft_putchar('A');
	}
	else if ((i == 1 && j == x) || ((i == y && j == 1)))
	{
		ft_putchar('C');
	}
	else if (((i == 1 || i == y) && (j > 1 && j < x)))
	{
		ft_putchar('B');
	}
	else if (((i > 1 && i < y) && (j == 1 || j == x)))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			check(j, i, x, y);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
