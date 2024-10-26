/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:42:01 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/23 10:02:54 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	char	*s;

	s = str;
	while (*str)
		str++;
	while (str != s)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (NULL);
}
