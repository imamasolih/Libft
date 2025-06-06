/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:24:45 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/06 10:39:28 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*c;

	if (size && ((num * size) / size != num))
		return (NULL);
	c = malloc(num * size);
	if (c == NULL)
		return (NULL);
	ft_memset(c, 0, num * size);
	return (c);
}
