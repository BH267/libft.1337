/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:09:41 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/06 20:59:33 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return (str);
	if (len > ft_strlen(str))
		len = ft_strlen(str);
	i = 0;
	while (str[i] && i <= len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < len)
		{
			if (j == ft_strlen(to_find) - 1)
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
