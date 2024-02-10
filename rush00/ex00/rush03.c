/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:49:18 by rabouzia          #+#    #+#             */
/*   Updated: 2023/07/02 18:54:50 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printa(int a, int x)
{
	if (a == 1)
		ft_putchar('A');
	else if (a == x)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	else
		ft_putchar('B');
}

void	ft_printb(int a, int x)
{
	if (a == 1)
		ft_putchar('B');
	else if (a == x)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			if (b == 1 || b == y)
			{
				ft_printa(a, x);
			}
			else
			{
				ft_printb(a, x);
			}
			a++;
		}
		if (x == 1)
			ft_putchar('\n');
		b++;
		a = 1;
	}
}
