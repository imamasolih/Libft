/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:06:11 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/05 16:12:54 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_nbwrite(int nb, int val)
{
	int		i;
	char	c;

	i = 1;
	while (i <= nb)
		i *= 10;
	i /= 10;
	while (i > 0)
	{
		c = (nb / i) + '0';
		write(val, &c, 1);
		nb = nb % i;
		i = i / 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	ft_nbwrite(n, fd);
}
