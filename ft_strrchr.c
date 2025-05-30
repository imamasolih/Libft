/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:05:36 by imamasol          #+#    #+#             */
/*   Updated: 2025/05/29 16:23:23 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *c)
{
	size_t	n;

	n = 0;
	while (c[n])
		n++;
	return (n);
}
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
