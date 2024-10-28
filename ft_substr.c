/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:50:37 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/28 19:07:13 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;

	subs = malloc(len + 1);
	if (!subs)
		return (NULL);
	ft_strlcpy(subs, s + start, len + 1);
	return (subs);
}
