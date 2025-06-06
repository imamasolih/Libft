/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:27:51 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/06 10:37:54 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	size_t			i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)ptr;
	while (i < n)
		c[i++] = 0;
}
