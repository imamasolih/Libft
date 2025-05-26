/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:11:43 by imamasol          #+#    #+#             */
/*   Updated: 2025/05/26 19:14:25 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char a = 108;

	if (ft_isalpha(a))
	{
		printf("%c is an alphabetic character.\n", a);
	}
	else
	{
		printf("%c is NOT an alphabetic character.\n", a);
	}
	return (0);
} */