/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 21:15:07 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/05 16:11:57 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char *c;

	c = (const unsigned char *)ptr;
	while (num > 0)
	{
		if (*c == (unsigned char)value)
			return ((void *)c);
		c++;
		num--;
	}
	return (NULL);
}