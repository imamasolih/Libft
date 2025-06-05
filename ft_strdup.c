/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:20:23 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/05 16:13:20 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t len;
	char *temp;
	char *c;

	len = ft_strlen(s);
	c = (char *)malloc(len + 1);
	if (!c)
		return (NULL);
	temp = c;
	while (*s)
		*temp++ = *s++;
	*temp = '\0';
	return (c);
}