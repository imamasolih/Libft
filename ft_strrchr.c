/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:05:36 by imamasol          #+#    #+#             */
/*   Updated: 2025/05/30 17:59:33 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	if (c == 0)
		return ((char *)&str[len]);
	while (len > 0)
	{
		if (str[len] == c)
			return ((char *)&str[len]);
		len--;
	}
	if (str[len] == c)
		return ((char *)&str[len]);
	return (NULL);
}
