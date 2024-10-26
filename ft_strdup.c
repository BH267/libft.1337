/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:30:50 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/24 11:04:28 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	int	i;
	char
		*ptr;

	ptr = malloc(ft_strlen(s) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		s[i] = ptr[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
