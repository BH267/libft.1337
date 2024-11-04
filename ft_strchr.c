/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:49:38 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/04 16:03:47 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	while (*str && c)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (c == '\0')
		return (str + ft_strlen(str));
	return (NULL);
}
