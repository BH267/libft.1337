/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:17:19 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/03 17:04:59 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trimlen(char *s, char const *set)
{
	char	*end;
	char	*ptr;

	ptr = (char *)set;
	end = s + ft_strlen(s) - 1 - ft_strlen(ptr);
	while (ft_strncmp(s, ptr, ft_strlen(ptr)) == 0)
		s += ft_strlen(ptr);
	while (ft_strncmp(end, ptr, ft_strlen(ptr) == 0))
		end -= ft_strlen(ptr);
	*(end + 1) = '\0';
	return (ft_strlen(s));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	*s;
	size_t	trml;
	size_t	i;

	ptr = (char *)s1;
	s = ft_strdup(ptr);
	trml = ft_trimlen(s, set);
	ptr = malloc(trml + 1);
	if (!ptr)
		return (NULL);
	i = -1;
	while (++i < trml)
		ptr[i] = s[i];
	ptr[i] = '\0';
	return (ptr);
}
