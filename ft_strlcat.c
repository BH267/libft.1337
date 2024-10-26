/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:10:28 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/24 10:58:12 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t l)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (dlen == l)
		return (dlen + slen);
	while (dlen + i < l && i < slen)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
