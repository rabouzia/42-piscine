/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 21:16:39 by rabouzia          #+#    #+#             */
/*   Updated: 2023/07/10 19:22:42 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int av, char **ac)
{
	int	i;

	(void)av;
	i = 0;
	while (ac[0][i])
	{
		ft_putchar(ac[0][i]);
		i++;
	}
	ft_putchar('\n');
}
