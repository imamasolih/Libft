/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:10:15 by imamasol          #+#    #+#             */
/*   Updated: 2025/05/30 16:16:25 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *srch, size_t n)
{
	size_t	i;
	size_t	j;

	if (!(*srch))
		return (big);
	i = 0;
	while (n > i && big[i])
	{
		j = 0;
		while (big[i + j] == srch[j] && n > (i + j))
		{
			if (!(srch[j]))
				return (&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
