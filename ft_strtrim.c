/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:08:32 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/05 16:14:44 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trstart(char const *str, char const *srch)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	while (str[i])
	{
		n = 0;
		j = 0;
		while (srch[j])
		{
			if (str[i] == srch[j++])
				n = 1;
		}
		if (n == 0)
			break ;
		i++;
	}
	return (i);
}
static int	ft_trend(char const *str, char const *srch)
{
	int	i;
	int	j;
	int	n;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		n = 0;
		j = 0;
		while (srch[j])
		{
			if (str[i] == srch[j++])
				n = 1;
		}
		if (n == 0)
			break ;
		i--;
	}
	return (i);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int		str;
	int		end;
	char	*ret;
	char	*temp;

	str = ft_trstart(s1, set);
	end = ft_trend(s1, set);
	if (end < str)
	{
		ret = (char *)malloc(1);
		ret[0] = '\0';
		return (ret);
	}
	ret = (char *)malloc(end - str + 2);
	if (!ret)
		return (NULL);
	temp = ret;
	while (str <= end)
		*temp++ = s1[str++];
	*temp = '\0';
	return (ret);
}
