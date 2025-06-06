/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:10:15 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/06 11:13:55 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *srch, size_t n)
{
	size_t	i;
	size_t	j;

	if (!(*srch))
		return ((char *)big);
	i = 0;
	while (n > i && big[i])
	{
		j = 0;
		while (big[i + j] && srch[j] && i + j < n && big[i + j] == srch[j])
			j++;
		if (!srch[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
