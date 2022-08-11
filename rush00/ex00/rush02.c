/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:31:51 by aammirat          #+#    #+#             */
/*   Updated: 2022/08/07 21:11:17 by ekhatske         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	colone(int x)
{
	write(1, "A", 1);
	if (x > 1)
	{
		while (x > 2)
		{
			write(1, "B", 1);
			x--;
		}
		write(1, "A", 1);
	}
}

void	ligne(int x)
{
	write(1, "B", 1);
	if (x > 1)
	{
		while (x > 2)
		{
			write (1, " ", 1);
			x--;
		}
		write(1, "B", 1);
	}
}

void	dercolone(int x)
{	
	write(1, "C", 1);
	if (x > 1)
	{
		while (x > 2)
		{
			write(1, "B", 1);
			x--;
		}
		write(1, "C", 1);
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	colone(x);
	write(1, "\n", 1);
	while (y > 2)
	{
		ligne(x);
		write(1, "\n", 1);
		y--;
	}
	if (y > 1)
	{
		dercolone(x);
		write(1, "\n", 1);
	}
}
