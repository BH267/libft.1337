/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:42:01 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/04 16:14:05 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s)
		s++;
	if (s - 1 == str)
		return (s - 1);
	while (s != str - 1)
	{
		if (*s == c)
			return (s);
		s--;
	}
	return (NULL);
}
