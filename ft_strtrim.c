/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:17:19 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/31 10:06:45 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_trimlen(char *s, char const *set)
{
	char	*end;

	end = s + ft_strlen(s) - 1;
	l = 0;
	while (*s == *set )
		s++;
	while (*end == *set)
		end--;
	*(end + 1) = '\0';
	return (ft_strlen(s));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*s;
	size_t	triml;
	size_t	i;

	s = (char *)s1;
	triml = ft_trimlen(s, set);
	str = malloc(triml + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < triml)
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
