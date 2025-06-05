/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:06:07 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/05 17:50:32 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ret;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		ret = (char *)malloc(1);
		ret[0] = '\0';
		return (ret);
	}
	if (len < (s_len - start))
		ret = (char *)malloc(len + 1);
	else
		ret = (char *)malloc(s_len - start + 1);
	if (!ret)
		return (NULL);
	while (s[start + i] && len > (size_t)i)
		{
			ret[i] = s[start + (i)];
			i++;
		}
	ret[i] = '\0';
	return (ret);
}
