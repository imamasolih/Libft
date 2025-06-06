/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:58:22 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/06 10:58:04 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freespt(char **arr, int ind)
{
	while (--ind >= 0)
		free(arr[ind]);
	free(arr);
}

static int	ft_jump(char const *str, char c, int n)
{
	while ((str[n] == c) && str[n])
		n++;
	return (n);
}

static int	ft_move(char const *str, char c, int n)
{
	while ((str[n] != c) && str[n])
		n++;
	return (n);
}

static char	**ft_mainfunc(char **arr, char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = ft_jump(str, c, i);
		i = ft_move(str, c, j);
		arr[k] = (char *)malloc(i - j + 1);
		if (!arr[k])
		{
			ft_freespt(arr, k);
			return (NULL);
		}
		tmp = arr[k++];
		while ((str[j] != c) && str[j])
			*tmp++ = str[j++];
		*tmp = '\0';
	}
	arr[k] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	*tmp;
	char	**ret;

	j = 0;
	tmp = s;
	while (*tmp)
	{
		if (*tmp != c)
		{
			j++;
			while (*tmp && *tmp != c)
				tmp++;
		}
		else
			tmp++;
	}
	ret = (char **)malloc((j + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	return (ft_mainfunc(ret, s, c));
}
